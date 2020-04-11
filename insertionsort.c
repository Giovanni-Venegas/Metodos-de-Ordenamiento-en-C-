// Insertion sort
#include <stdio.h>

void insercion(int m[], int n_elementos);

void main()
{
  int m[]={25, 2, 7, 3, 67, 43, 1, 15, 9, 32};
  int i;
  
  printf("Arreglo original\n");
  for (i=0; i<10; i++)
    printf("%d ", m[i]);
  printf("\nArreglo ordenado\n");
  insercion(m,10);
  for (i=0; i<10; i++)
    printf("%d ", m[i]);
}

void insercion(int m[], int n_elementos)
{
  int i,k,x;
  //double x;
  // desde el segundo elemento
  for (i=1; i<n_elementos; i++)
    {
      x=m[i];
      k=i-1;
      while (k>=0 && x<m[k])
	{
	  m[k+1]=m[k];  // hacer espacio para insertar
	  k--;
	}
      m[k+1]=x;
    }
}
