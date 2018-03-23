#include <iostream>

using namespace std;
/*Escriba un programa que reciba una cadena de caracteres y cambie las letras
 * minúsculas por mayúsculas, los demás caracteres no deben ser alterados.*/
int main()
{
    char frase[100]={};

       cout<<"Escribe una  frase: ";
       cin.getline(frase,100);

       for(int i = 0; frase[i]; i++)
       {
           if( frase[i]>=97 && frase[i]<123)
           {
               frase[i] = frase[i]-32;
           }

           else {frase[i]=frase[i];}

       }

       cout<<frase<<endl;
}
