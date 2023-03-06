#include <iostream>
using namespace std;

int n1, n2; //variáveis global, podem ser utilizada em qual parte do programa ou codigo

int main(){

   /* int n3,n4; //variáveis local, podem ser utilizada só dentro da função main().*/

    //Operadores matemáticos: + soma, - subtração, / divisão, * multiplicação, % resto da divisão, () prioridade de calculo
    int n3,n4;
    int res,res2, res3,res4,res5,res6;

    n1=11;
    n2=3;
    n3=5;
    n4=2;

    res=n1+n2+n3+n4;
    res2=(n1+n2+n3+n4)-10;
    res3=n1+n2*n4;
    res4=(n1+n2)*n4;
    res5=n1/n2;
    res6=n1%n2;

    cout << "\nSoma de todas variaveis: " << res << "\n\n"; 
    cout << "Soma de todas variaveis com subtracao de -10: " << res2 << "\n\n"; 
    cout << "Precedencia de operadores: " << res3 <<"\n\n";
    cout << "Precedencia de operadores 2: " << res4 <<"\n\n";
    cout << "Divisao: " << res5 <<"\n\n";
    cout << "Resto: " << res6 <<"\n\n";

    return 0;
}
