/*
8.Write a program to check whether the given number is even or odd using a bitwise 
operator
*/
#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);

    if(a&1)
    {
        printf("Given number %d is odd numberc",a);
    }
    else
        printf("Given number %d is even number" ,a);
    return 0;
}