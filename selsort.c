/*program demonstration of selection method*/
#include<stdio.h>
#include<string.h>
#define SIZE 10

void selsort(int arr[]);

void main()
{
  int arr[SIZE],i;
  
 for(i=0; i<SIZE; i++)
 {
  printf("Enter element : ");
  scanf("%d",&arr[i]);
 }

 selsort(arr);
 
 printf("After selection sort the elements:\n");
 for(i=0; i<SIZE; i++)
    printf("%d\t",arr[i]);
 printf("\n");
 getchar();
}


void selsort(int arr[])
{
  int i,j,min,temp;

  for(i=0; i<SIZE; i++)
    {
      min=i;
      for(j=i+1; j<SIZE; j++)
	if(arr[j]<arr[min])
	  min=j;
      temp=arr[i];
      arr[i]=arr[min];
      arr[min]=temp;
    }
}
