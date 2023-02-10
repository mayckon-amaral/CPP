#include <iostream>

using namespace std;

int main()
{

    // padrão para declarar variavel
    // precisamos do TIPO E NOME;
    // TIPO NOME = VALOR
    // VARIÁVEIS ATRIBUIDAS INICIAIS

    int vidas = 10;        // ex: 1, -1, 5000, -555555
    char letra = 'J';      //  ex: 'M', 'A'
    double decimal = 2.5;  // ex: 2.45641564
    float decimal2 = 5.2;  // ex: 2.5
    bool vivo = true;      // ex: True ou False
    string nome = "Jesus"; // "Deus é Fiel"

    /*imprimir uma variavel sem quebra de linha
    cout << nome; */

    cout << "Digite o numeros de vidas: ";
    cin >> vidas;
    cout << "Digite uma letra: ";
    cin >> letra;
    cout << "Dinheiro: ";
    cin >> decimal;
    cout << "Digite seu nome: ";
    cin >> nome;

    cout <<"\n" << "VIDAS: " << vidas <<"\n";
    cout << "LETRA: " << letra <<"\n";
    cout << "Dinheiro: " << decimal <<"\n";
    cout << "NOME: " << nome <<"\n";

    /*imprimir valores com um cout
        cout << inteiro << "\n" << letra << "\n" << decimal << "\n" << decimal2 << "\n" << vivo << "\n" << nome << "\n"; */
    system("pause");
    return 0;
}
