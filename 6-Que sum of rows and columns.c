#include<stdio.h>
#include<conio.h>
void main()
{
     int i,j,k,a[10][10],r[10],c[10],n;

       printf("\n\nFind the sum of rows an columns of a Matrix:\n");
       printf("-------------------------------------------\n");


     printf("Input the size of the square matrix : ");
     scanf("%d", &n);
	 printf("Input elements in the first matrix :\n");
       for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
	           printf("element - [%d],[%d] : ",i,j);
	           scanf("%d",&a[i][j]);
            }
        }
	 printf("The matrix is :\n");
	 for(i=0;i<n;i++)
	 {
	   for(j=0;j<n ;j++)
	     printf("% 4d",a[i][j]);
	    printf("\n");
	 }

     /* Sum of rows */
     for(i=0;i<n;i++)
     {
	  r[i]=0;
	  for(j=0;j<n;j++)
	  r[i]=r[i]+a[i][j];
     }

      /* Sum of Column */
      for(i=0;i<n;i++)
      {
	  c[i]=0;
	  for(j=0;j<n;j++)
		c[i]=c[i]+a[j][i];
      }

      printf("The sum or rows and columns of the matrix is :\n");
      for(i=0;i<n;i++)
      {
	   for(j=0;j<n;j++)
	      printf("% 4d",a[i][j]);
	   printf("% 8d",r[i]);
	   printf("\n");
       }
       printf("\n");
	    for(j=0;j<n;j++)
             {
	        printf("% 4d",c[j]);
             }
            printf("\n\n");
  }



