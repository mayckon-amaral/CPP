#include <iostream>

using namespace std;

int main(){

    int cont;

    cont=0;

    while(cont < 1000){
        cout << cont << "\n";
        cont++;     // com o cont++ aki ele conta de 0 a 499.
        if(cont == 500){
            break;      // break interrompe o loop(while) e sai do loop e continua a execução do código
        }
        //cont++;   com o cont++ aki ele conta de 0 a 500.
    }

    return 0;
}
