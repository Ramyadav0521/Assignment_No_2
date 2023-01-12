/*
9.Write a program to print size of an int, a float, a char and a double type variable
*/
#include<stdio.h>
int main()
{
    int var_name = 12333;
    printf("\n int size of variable: %d",sizeof(var_name));

    char var_name1 = 'A';
    printf("\n char size of variable: %d ",sizeof(var_name1));

    float var_name2 = 'A';
    printf("\n float size of variable: %d ",sizeof(var_name2));
    
    double var_name3 = 'A';
    printf("\n double size of variable: %d ",sizeof(var_name3));

    return 0;
}