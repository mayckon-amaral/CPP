#include <iostream>
#include <cstdlib> //biblioteca para funcionar o system("cls") 

using namespace std;

int main(){

    int n1,n2,res;
    char opc;

    inicio: //aqui foi criado uma label com esse nome. Para indicar que e uma label precisa colocar os dois pontos no final. 

    system("cls"); //serve para limpar a tela do terminal

    cout << "Digite o valor da nota 1: ";
    cin >> n1;
    cout << "Digite o valor da nota 2: ";
    cin >> n2;

    res = n1+n2;

    /*
    
    >= 60               aprovado
    >= 40 e < 60        recuperção
    < 40                reprovado
    
    */


    if (res >= 60){
        cout << "\nAluno Aprovado\n";
    }else if (res >= 40 ){
        cout << "\nAluno em Recuperacao\n";
    }else{
        cout << "\nAluno Reprovado\n";
    }

    cout << "\nDigitar outras notas? [s/n] ";
    cin >> opc;

    if (opc == 's' or  opc == 'S'){ //o comando goto serve para direcionar o ponteiro de execução do programa, quando o ponteiro encontra o goto ele direciona para uma label.
        goto inicio; //aqui direcionamos o ponteiro para cima na label "inicio:" para que execute tudo denovo se o usuário selecionar o "s ou S" para digitar mais notas.
    }
   
      
   
    return 0;
}
