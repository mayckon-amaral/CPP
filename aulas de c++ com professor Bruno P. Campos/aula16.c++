#include <iostream>

using namespace std;

int main(){
    int cont;

    cont=7;
    do{     //comando "do"(faça), ele executa pelo menos uma vez o bloco de comando e testa no final a condição
        cout << "Deus e Fiel - " << cont << "\n";
        cont++;
    }while(cont < 7);

    cout << "\nRotina Finalizada";

    return 0;
}
