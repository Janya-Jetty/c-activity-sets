// 3. Write a C program to add two numbers using **pass by value**

#include<stdio.h>

int input()
{
    int n;
    printf("enter the value");
    scanf("%d",&n);
    return n;
}

int add(int a, int b)
{
    int sum;
    sum=a+b;
    return sum;
}

void output(int a, int b, int sum)
{
    printf("the sum of %d,%d is %d",a,b,sum);
}

int main()
{
    int a,b=input();
    int sum=add(a,b);
    output(a,b,sum);
    return 0;   
}