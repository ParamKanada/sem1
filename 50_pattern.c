/*
A
BB
CCC
DDDD
EEEEE  
*/

#include<stdio.h>
int main()
{
        for(int i=1;i<=5;i++)
        {
                for(int j=1;j<=i;j++)
                printf("%c",64+i);

                printf("\n");
        }
}