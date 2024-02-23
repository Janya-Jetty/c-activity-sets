// 4. Write a program to find nth number in fibonacci sequence.

#include <stdio.h>

int input() 
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    return num;
}

int find_fibo(int n) 
{
    if (n <= 1)
        return n;
    int a = 0, b = 1, next_term;
    for (int i = 2; i <= n; i++) 
    {
        next_term = a + b;
        a = b;
        b = next_term;
    }
    return b;
}

void output(int n, int fibo) 
{
    printf("The %dth Fibonacci number is: %d\n", n, fibo);
}

int main() 
{
    int n;
    n = input();
    int fibo = find_fibo(n);
    output(n, fibo);
    return 0;
}