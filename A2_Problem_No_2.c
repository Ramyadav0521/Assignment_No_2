/*
2. Write a program to print a given number without its last digit.
*/
#include<stdio.h>
int main()
{
    int num;
    printf("\nEnter a number ");
    scanf("%d",&num);

    printf("given number without its last digit %d is %d",num,num/10);
    printf("\n");
    return 0;
}