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

void mostrar_menu() {
    cout << "\n--- Menu ---\n";
    cout << "1. Ver ID do objeto\n";
    cout << "2. Inserir ou atualizar chave\n";
    cout << "3. Consultar valor de uma chave\n";
    cout << "4. Remover chave\n";
    cout << "5. Sair\n";
    cout << "Escolha uma opção: ";
}

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
    
        int opcao = 0;
        string chave, valor;

        while (opcao != 5) {
            mostrar_menu();
            cin >> opcao;

            switch(opcao) {
                case 1: { // Ver ID do objeto
                    char* object_id = etcd->id();
                    cout << "ID do objeto: " << object_id << endl;
                    CORBA::string_free(object_id);  // Libera memória alocada
                    break;
                }
                case 2: { // Inserir ou atualizar chave
                    cout << "Digite a chave: ";
                    cin >> chave;
                    cout << "Digite o valor: ";
                    cin >> valor;
                    bool nova_chave = etcd->put(chave.c_str(), valor.c_str());
                    cout << (nova_chave ? "Nova chave inserida." : "Chave já existente, valor atualizado.") << endl;
                    break;
                }
                case 3: { // Consultar valor de uma chave
                    cout << "Digite a chave a ser consultada: ";
                    cin >> chave;
                    try {
                        char* valor = etcd->get(chave.c_str());
                        cout << "Valor associado à chave '" << chave << "': " << valor << endl;
                        CORBA::string_free(valor);  // Libera memória alocada
                    } catch (InvalidKey& e) {
                        cerr << "Erro: Chave '" << chave << "' não encontrada." << endl;
                    }
                    break;
                }
                case 4: { // Remover chave
                    cout << "Digite a chave a ser removida: ";
                    cin >> chave;
                    try {
                        etcd->del(chave.c_str());
                        cout << "Chave '" << chave << "' removida com sucesso." << endl;
                    } catch (InvalidKey& e) {
                        cerr << "Erro: Chave '" << chave << "' não encontrada." << endl;
                    }
                    break;
                }
                case 5: // Sair
                    cout << "Encerrando o programa..." << endl;
                    break;
                default:
                    cout << "Opção inválida. Tente novamente." << endl;
            }
        }

	    // 4. Finalizações
        orb->destroy();
    } catch (const CORBA::Exception& e) {
        cerr << "Erro CORBA: " << e << endl;
    }
	return 0;
}
