#include <iostream>

using namespace std;

int main(){
    
    // (expressão) ? valor1 : valor2;

    int n1,n2,nota;
    string res;

    cout << "Digite a primeira nota: ";
    cin >> n1;
    cout << "Digite a segunda nota: ";
    cin >> n2;

    nota = n1+n2;

    // >=60  Aprovado
    // <60   Reprovado     

    // if(se) vai ser " ? ", e o else(se não ou caso contrario) vai ser o " : " exemplos abaixo:

    //(nota >=60) ? res="Aprovado" : res="Reprovado";

    res= (nota >=60) ? "Aprovado" : "Reprovado";
    cout << "\nSituacao do aluno: " << res << "\n";

    return 0;
}
