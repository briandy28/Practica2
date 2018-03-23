#include <iostream>
using namespace std;
/*Elabore un programa que llene una matriz 5x5 con los números del 1 al 25 y la imprima, luego
imprima la matriz rotada 90, 180 y 270 grados.*/
int** matriz_return(int fil, int col,int valor)
{
    int** matriz = 0;
    matriz = new int*[fil];

    for (int h = 0; h < fil; h++)
    {
        matriz[h] = new int[col];
        for (int w = 0; w < col; w++)
        {
            matriz[h][w] = valor;
            valor+=1;
        }
    }
    return matriz;
}
int** copiar_matriz(int fil, int col,int **arreglo)
{
    int** matriz = 0;
    matriz = new int*[fil];

    for (int h = 0; h < col; h++)
    {
        matriz[h] = new int[col];
        for (int w = 0; w < col; w++)
        {
          matriz[h][w] = arreglo[h][w];
        }
    }

    return matriz;
}
void girar_matriz(int **matriz,int **matriz2, int fila, int colm)
{
    int fin = matriz2[0][4];
    int colm2=0;
    for(int i=0; i<fila; i++)
    {
        int fila2=4;
        for(int j=0; j<colm; j++)
        {
            *(*(matriz+i)+j)=matriz2[fila2][colm2];
            fila2 -= 1;
        if(matriz[i][j]==fin){break;}
        }
        colm2 +=1;
        cout<<endl;
    }
}

void print_matriz(int **array, int filas, int columnas){
    for(int i=0; i<filas; i++)
    {
        for(int j=0; j<columnas; j++)
        {
            printf("\t%d",array[i][j]);
        }
        cout << endl;
    }
}
int main()
{
  int num=1,cont=1,grados=90;
  cout<<"Matriz original"<<endl;
  int** matriz;
  int** matrizcopia;
  matriz = matriz_return(5,5,num);
  matrizcopia=copiar_matriz(5,5,matriz);
  print_matriz(matriz,5,5);
  while(cont<=3)
  {
      cout<<"Matriz girada "<<grados<<"  grados"<<endl;
      girar_matriz(matriz,matrizcopia,5,5);
      matrizcopia=copiar_matriz(5,5,matriz);
      print_matriz(matriz,5,5);
      cont++;
      grados+=90;
  }
  }

