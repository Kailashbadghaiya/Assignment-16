#include<stdio.h>
#include<conio.h>
int main()
{
    int a[3][3] = {1,2,3,4,5,6,7,8,9} ;
    int i,sum=0 ;
    for(i=0;i<3;i++)
    {
        sum = a[0][2] +a[1][1] + a[2][0] ;
    }
    for(i=0;i<3;i++)
    {
        printf("%d ",sum);
    }
    return 0;
}
