#include<stdio.h>
#include<stdio.h>

/*A sparse martix is matrix which  has more zero elements than nonzero elements */
void main ()
{
	static int a[10][10];
	int i,j,r,c;
	int ctr=0;
     printf("\n\nDetermine whether a matrix is a sparse matrix :\n");
     printf("----------------------------------------------------\n");
     printf("Input the number of rows of the matrix : ");
     scanf("%d", &r);
     printf("Input the number of columns of the matrix : ");
     scanf("%d", &c);
	 printf("Input elements in the first matrix :\n");
       for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
	           printf("element - [%d],[%d] : ",i,j);
	           scanf("%d",&a[i][j]);
			if (a[i][j]==0)
			{
				ctr++;
			}
            }
        }
	if (ctr>((r*c)/2))
	{
		printf ("The given matrix is sparse matrix. \n");
	}
	else
		printf ("The given matrix is not a sparse matrix.\n");

	printf ("There are %d number of zeros in the matrix.\n\n",ctr);
}

