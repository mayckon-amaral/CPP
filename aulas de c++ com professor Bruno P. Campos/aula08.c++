#include <iostream>
using namespace std;

int main(){

    int num = 10;
    cout << num << "\n\n";

    /*Inversão Tradicional, para gravar o valor.
    num = num * -1;  
    cout << num << "\n\n";*/

    /*Inversção de operedor negativo, Momentâneo.
    cout << -num << "\n\n"; */

    //Inversão Simplificada, para gravar o valor, seguida de duas inversões.
    num = - num;
    num = num * -1;
    cout << num << "\n\n";

    return 0;
}
