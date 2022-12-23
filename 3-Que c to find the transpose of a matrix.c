#include<stdio.h>
#include<conio.h>
int main()
{
    int a[3][3] = {1,2,3,4,5,6,7,8,9} ;
    int b[3][3] = {1,2,3,4,5,6,7,8,9} ;
    int i,j ;

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            a[i][j] = b[i][j] ;
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",a[j][i]);
        }
        printf("\n");
    }
    return 0;
}
