#include<stdio.h>
#include<stdio.h>
int main()
{

   int max[4][4] = {{0, 0, 0, 1},
                    {0, 1, 1, 1},
                    {1, 1, 1, 1},
                    {0, 0, 0, 0}};

   int max_count=0, index=-1,count=0,i,j;

   for(i=0;i<4;i++)
    {
     for(j=0;j<4;j++)
     {
         if(max[i][j]==1)
            count++;

     }
     if(count>max_count)
     {
        max_count = count;
        index = i;
     }
   }

   printf("Index of row with maximum 1s is %d", index);

}
