//
// CLIENTE CEtcd
//
// Sistemas Distribuídos
// Escola Politécnica -- PUCPR
//

#include <iostream>
#include <string>
#include <stdexcept>
#include <CEtcdC.h>

using namespace std;
using namespace CORBA;

int main(int argc, char* argv[])
{
    try {
        // Verifica se o argumento IOR foi passado
        if (argc < 2) {
            cerr << "Erro: Uso correto: " << argv[0] << " <IOR>" << endl;
            return 1;
        }

        // 1. Inicializa ORB
        ORB_var orb = ORB_init(argc, argv, "ORB");
	
        // 2. Obtém referência para objeto distribuído (da IOR)
        Object_ptr obj = orb->string_to_object(argv[1]);
        Search_var etcd = Search::_narrow(obj);

        if (is_nil(etcd)) {
            cerr << "Erro: Falha ao converter objeto remoto." << endl;
            return 1;
        }
    
        // 3. Usa objeto (chama métodos)

        // Testa o método id()
        char* object_id = etcd->id();
        cout << "ID do objeto: " << object_id << endl;
        CORBA::string_free(object_id);  // Libera memória alocada

        // Testa o método put()
        cout << "Inserindo chave 'chave1' com valor 'valor1'..." << endl;
        bool nova_chave = etcd->put("chave1", "valor1");
        cout << (nova_chave ? "Nova chave inserida." : "Chave já existente, valor atualizado.") << endl;

        // Testa o método get()
        try {
            char* valor = etcd->get("chave1");
            cout << "Valor associado à chave 'chave1': " << valor << endl;
            CORBA::string_free(valor);  // Libera memória alocada
        } catch (EtcdModule::InvalidKey& e) {
            cerr << "Erro: Chave 'chave1' não encontrada." << endl;
        }

        // Testa o método put() com atualização de valor
        cout << "Atualizando chave 'chave1' com novo valor 'valor2'..." << endl;
        nova_chave = etcd->put("chave1", "valor2");
        cout << (nova_chave ? "Nova chave inserida." : "Chave já existente, valor atualizado.") << endl;

        // Testa o método get() novamente após a atualização
        try {
            char* valor = etcd->get("chave1");
            cout << "Valor atualizado associado à chave 'chave1': " << valor << endl;
            CORBA::string_free(valor);
        } catch (EtcdModule::InvalidKey& e) {
            cerr << "Erro: Chave 'chave1' não encontrada." << endl;
        }

        // Testa o método del()
        cout << "Removendo chave 'chave1'..." << endl;
        try {
            etcd->del("chave1");
            cout << "Chave 'chave1' removida com sucesso." << endl;
        } catch (EtcdModule::InvalidKey& e) {
            cerr << "Erro: Chave 'chave1' não encontrada." << endl;
        }

        // Testa o método get() após a remoção (deve lançar exceção)
        try {
            char* valor = etcd->get("chave1");
            cout << "Valor associado à chave 'chave1': " << valor << endl;
            CORBA::string_free(valor);
        } catch (EtcdModule::InvalidKey& e) {
            cerr << "Erro: Chave 'chave1' foi removida, não encontrada." << endl;
        }

	    // 4. Finalizações
        orb->destroy();
    } catch (const CORBA::Exception& e) {
        cerr << "Erro CORBA: " << e << endl;
    }
	return 0;
}
