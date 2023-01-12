/*
7Write a program to find the position of first 1 in LSB.
*/
#include <stdio.h>
int main()
{
    int num =2,count=1;
    
    while (1)
    {
    
        if(num&1==1)
        {
            printf("\nPosition of 1 in LSB: %d\n", count);
            break;
        }
        num = num>>1;
        count ++;
    } 
    return 0;
}