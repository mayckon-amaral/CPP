//      exemplo 1

/*#include <iostream>

using namespace std;

int main(){

    int val;

    cout << "Selecione uma cor: \n";
    cout << "[1]=Verde, [2]=Azul, [3]=Vermelho\n";

    cin >> val;

    switch (val){

        case 1:
            cout << "Cor selecionada: Verde\n";
            break;
        case 2:
            cout << "Cor selecionada: Azul\n";
            break;
        case 3:
            cout << "Cor selecionada : Vermelho\n";
            break;
        default:
            cout << "Valor selecionado invalido!!!\n";
    }

    cout << "\nPrograma Finalizado...\n";


    return 0;
}*/



//      exemplo 2



/*#include <iostream>

using namespace std;

int main(){

    int val;

    cout << "Selecione uma cor: \n";
    cout << "[1,2,3]=Verde, [4,5,6]=Azul\n";

    cin >> val;

    switch (val){ 

        //se selecionar a opção 1, 2 ou 3 vai ser a cor Verde, se selecionar a opção 4, 5 ou 6 vai se a cor Azul

        case 1:
        case 2:
        case 3:
            cout << "Cor selecionada : Verde\n";
            break;
        case 4:
        case 5:
        case 6:
            cout << "Cor selecionada : Azul\n";
            break;
            
        default:
            cout << "Valor selecionado invalido!!!\n";
    }

    cout << "\nPrograma Finalizado...\n";


    return 0;
}*/



    //      exemplo 3
    //      switch dentro do outro, chamado "swith aninhado".

#include <iostream>

using namespace std;

int main(){

    int val;

    cout << "Selecione um transporte: \n";
    cout << "[1]=Carro, [2]=moto, [3]Aviao, [Helicoptero]\n";

    cin >> val;

    switch(val){ 

        case 1:
        case 2:
            cout << "\nTransporte terrestre\n";
            switch (val){
                case 1:
                    cout << "Carro selecionado\n";
                    break;
                case 2:
                    cout << "Moto selecionada\n";
                   break;
            }
            break;
        case 3:
        case 4:
            cout << "\nTransporte Aereo\n";
            switch(val){
                case 3:
                    cout << "Aviao selecionado\n";
                    break;
                case 4:
                    cout << "Helicoptero selecionado\n";
                    break;
            }
            break;
        default:
            cout << "Transporte selecionado INVALIDO!!!\n";
    }

    cout << "\nPrograma Finalizado...\n";


    return 0;
}
