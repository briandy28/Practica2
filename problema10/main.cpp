#include <iostream>
using namespace std;
/*Escribir un programa que permita convertir un número en el sistema romano al sistema
 arábigousado actualmente. A continuación se encuentran los caracteres usados en el
sistema romano y su equivalente arábigo:*/

int main()
{
    char romanos[100];
    int valor[100];
    int longitud=0, numero = 0,l=0;
    cout<<"Introduzca el numero romano que quiera convertir a arabigos: ";
    cin>>romanos;
    for(int b=0 ; romanos[b]!= '\0';b++)
    {
        longitud++;
    }
    for(int i=0;i<longitud;i++)
    {
        romanos[i] = toupper(romanos[i]); //convierto las letras introducidas por su respectivo valor
        if (romanos[i]==73) //ascii
        {
            valor[i]=1;
        }
        if (romanos[i]==86)
        {
            valor[i]=5;
        }
        if (romanos[i]==88)
        {
            valor[i]=10;
        }
        if (romanos[i]==76)
        {
            valor[i]=50;
        }
        if (romanos[i]==67)
        {
            valor[i]=100;
        }
        if (romanos[i]==68)
        {
            valor[i]=500;
        }
        if (romanos[i]==77)

        {
            valor[i]=1000;
        }
        else
        {
            l=1;
            break;
        }
    }


if(l==0)
{
    for(int i=0;i<longitud;i++)//evaluo las condiones dadas

    {
        if(i==(longitud-1))
        {
            numero=numero+valor[i];
        }
        else
        {
            if(valor[i]>=valor[i+1])
            {
                numero=numero+valor[i];
            }
            else
            {
                numero=numero-valor[i];
            }
        }
    }
    cout<<"el numero igresado fue " <<romanos<<" que corresponde a "<<numero<<endl;

}
else
{  if(l==1)
    {
    cout<<"error este numero no es romano "<<endl;
    }

}
}

