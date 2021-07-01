#include <stdio.h>
void main()
{
  int arr[3][3],*p,i,j;
  printf("\n\nReading a 2D array of size 3x3 and print the matrix :\n");
  printf("\n------------------------------------------------------\n");  
  printf("Input elements in the matrix :\n");
  	for(i=0;i<3;i++)
  	{
  		for(j=0;j<3;j++)
  		{
  			printf("element - [%d],[%d] : ",i,j);
	      scanf("%d",(*(arr+i)+j));
		  }
  		
	  }
	 
  printf("\nThe matrix is : \n");
  for(i=0;i<3;i++)
  	{
  	    for(j=0;j<3;j++)
  		{
  		 printf("%d\t",*((*(arr+i)+j)));
		  }
  		printf("\n");
	  }
	  printf("\n-------------------------------------------------------------\n\n");
	  printf("Sum of Diagonal elements of 3x3 matrix\n\n");
	  int sum=0;
	   for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i==j)
            {
                sum=sum+arr[i][j];
            }
        }
    }
 
    printf("The sum of diagonal elements of a square matrix = %d\n",sum);
}
