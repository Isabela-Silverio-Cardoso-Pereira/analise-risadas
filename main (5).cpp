/******************************************************************************
Entrada
A entrada é composta por uma linha, contendo uma sequência de no máximo 50 caracteres, formada apenas por letras minúsculas sem acentuação. As vogais são as letras ‘a’,‘e’,‘i’,‘o’,‘u’. A sequência contém pelo menos uma vogal.

Saída
Seu programa deve produzir uma linha contendo um caractere, “S” caso a risada seja das mais engraçadas, ou “N” caso contrário.

*******************************************************************************/
#include <iostream>
using namespace std;
#include <string>

int main()
{
    string risada;
    cin >> risada;
    char letra_A = 'a';
    char letra_E = 'e';
    char letra_I = 'i';
    char letra_O = 'o';
    char letra_U = 'u';
    
   bool encontrado = false; 
    
    for(size_t i = 0; i< risada.length(); i++){
        if(risada[i] == letra_A|| risada[i] == letra_E || risada[i] == letra_I || risada[i] == letra_O || risada[i] == letra_U){
            encontrado =true ;
            
        }
    }
    
    if(encontrado){
        cout << "S";
    }else{
        cout << "N";
    }
    


    return 0;
}