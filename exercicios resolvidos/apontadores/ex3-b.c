#include <stdio.h>
#include <stdlib.h>

int main() 
{
   //Allocate memory for array arr1
   int *arr1 = malloc(sizeof(int)*10);
   int i,n, sum = 0;
   int *pt;
   
 	printf("\n\n Pointer : Sum of all elements in an array :\n"); 
	printf("------------------------------------------------\n"); 
	
   printf(" Input the number of elements to store in the array (max 10) : ");
   scanf("%d",&n);
   
   printf(" Input %d number of elements in the array : \n",n);
   for(i=0;i<n;i++)
      {
	  printf(" element - %d : ",i+1);
	  scanf("%d",arr1+i);
	  } 	

   pt = arr1; // pt store the base address of array arr1
 
   for (i = 0; i < n; i++) {
      sum = sum + *pt;
      pt++;
   }
 
   printf(" The sum of array is : %d\n\n", sum);
   //Free memory allocated for arr1
   free(arr1);

   return 0;
}