#include <stdio.h>
int main()
{
  int arr1[3][3],i,j;
  int *ptr=&arr1[3][3];
  int sum=0;
       printf("\nRead a 2D array of size 3x3 and print the matrix :\n");
       printf("Input elements in the matrix :\n");  //Stores values into the array.
  for(i=0;i<3;i++)
  {
      for(j=0;j<3;j++)
      {
	      printf("element - [%d],[%d] : ",i,j);
	      scanf("%d",&arr1[i][j]);
      }
  }  
  printf("\nThe matrix is : \n");   // Gives the output in matrix form.
  for(i=0;i<3;i++)
  {
      printf("\n");
      for(j=0;j<3;j++)
          printf("%d\t",arr1[i][j]);
  }
  printf("\n\n");
  for(i=0;i<3;i++)  //Addition of diagonal elements.
  {
      for(j=0;j<3;j++)
      {
         if(i==j)
         {
            sum=sum+arr1[i][j];
         }
      }
  }
  printf("The sum of diagonal elements of a square matrix = %d\n",sum);
  return 0;
  }
