#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j ;
    int a[3][3] = {{1,0,0},{4,5,0},{7,8,9}};

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            a[i][j] ;
        }
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                printf("%d ",a[i][j]) ;
            }
            printf("\n") ;
        }
    }
    return 0;
}
