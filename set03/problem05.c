// 5. Write a program to find all the prime numbers between 2 to n Eratosthenes Sieve method.

#include <stdio.h>
#include <stdbool.h>

int input_array_size() 
{
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    return size;
}

void init_array(int n, int a[n]) 
{
    for (int i = 0; i < n; i++) 
    {
        a[i] = i + 2;
    }
}

void eratosthenes_sieve(int n, int a[n]) 
{
    for (int i = 0; i < n; i++) 
    {
        if (a[i] != 0) 
        {
            for (int j = 2 * a[i] - 2; j < n; j += a[i]) 
            {
                a[j] = 0;
            }
        }
    }
}

void output(int n, int a[n]) 
{
    printf("Prime numbers up to %d are:\n", n);
    for (int i = 0; i < n; i++) 
    {
        if (a[i] != 0) 
        {
            printf("%d ", a[i]);
        }
    }
    printf("\n");
}

int main() 
{
    int size = input_array_size();
    int array[size];
    init_array(size, array);
    eratosthenes_sieve(size, array);
    output(size, array);
    return 0;
}