/*
12.Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR and 
convert it into USD.
*/
#include<stdio.h>
int main()
{
    double num;
    printf("\n Enter a USD amount: ");
    scanf("%lf",&num);

    num = num*76.23;
    printf("Amount in INR convert it into USD %lf",num);
    return 0;
}