// Bubble sort
#include <stdio.h>

void burbuja(int m[], int n_elementos);

int main()
{
  int m[]={25, 2, 7, 3, 67, 43, 1, 15, 9, 32};
  int i;

  printf("Arreglo original\n");
  for (i=0; i<10; i++)
    printf("%d ", m[i]);
  printf("\nArreglo ordenado\n");
  burbuja(m,10);
  for (i=0; i<10; i++)
    printf("%d ", m[i]);
		
  return(1);
}

void burbuja(int m[], int n_elementos)
{
  int aux, i, s=1;
	
  while(s && (--n_elementos>0))
    {
      s=0;
      for (i=1; i<=n_elementos; i++)
	if (m[i-1]>m[i])
	  {
	    aux=m[i-1];
	    m[i-1]=m[i];
	    m[i]=aux;
	    s=1;
	  }
    }
}
