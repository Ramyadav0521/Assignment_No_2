/*
3. Write a program to swap values of two int variables
*/
#include<stdio.h>
int main()
{
    int a=5,b=7;
    a = a+b;
    b =a-b;
    a =a-b;
    printf("Swap values of two int variables is A-%d B-%d",a,b);
    return 0;


}