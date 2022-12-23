#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,a[3][3] = {1,2,3,2,1,-1,4,5,2};
    int b[3][3] = {3,1,4,2,0,6,-1,2,4};
    int c[3][3] ;

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            c[i][j] = a[i][j] + b[i][j] ;
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}
