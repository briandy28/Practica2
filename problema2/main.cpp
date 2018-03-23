/*Elabore un programa que genere un arreglo de 200 letras mayúsculas aleatorias, imprima este arreglo
y luego imprima cuantas veces se repite cada letra en el arreglo.
Ejemplo: supóngase que se genera el arreglo de 10 elementos: ABARSECAAB. El programa debe imprimir: ABARSECAAB
A: 4
B: 2
C: 1
Y así sucesivamente.*/
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main()
{
    int num, k,letra=65,indice;
    char letras[200] = {};
    int cont[26]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    srand(time(NULL));
    for(int i=0; i<200; i++)
    {
        num = 65 + rand() % (91 - 65);
        letras[i]=num;
    }
    cout<<letras<<endl;
    for (k=0 ;k<=200; k++)
    {  for(int i = 65;i<91;i++)
        {
            if (letras[k]==i)
            {   indice=letras[k]-65;
                cont[indice]++;
            }
        }

    }
    letra=65;
    for (int i=0;i<26;i++)
    {
         cout<<(char)letra<<" = "<<cont[i]<<endl;
         letra+=1;
    }
cin.get();
    }



