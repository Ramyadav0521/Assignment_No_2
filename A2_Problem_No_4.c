/*
4. Write a program to swap values of two int variables without using a third variable
*/
#include<stdio.h>
int main()
{
    int a,b;
    printf("\n Enter a number ");
    scanf("%d %d",&a,&b);

    a = a+b;
    b = a-b;
    a = a-b;
    printf("Swap two number without using a third varaible A=%d B=%d",a,b);
    return 0;
}