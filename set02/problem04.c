// 04.  Write a program to find Sum of composite number in an array of different numbers entered by the user.

#include <stdio.h>
int input_array_size();
void input_array(int n, int a[n]);
int sum_composite_numbers(int n, int a[n]);
void output(int sum);

int input_array_size() 
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    return n;
}

void input_array(int n, int a[]) 
{
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) 
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &a[i]);
    }
}

#include <stdio.h>

int is_prime(int num) 
{
    if (num <= 1) return 0; 
    for (int i = 2; i * i <= num; i++) 
    {
        if (num % i == 0) return 0;
    }
    return 1; 
}

int sum_composite_numbers(int n, int a[]) 
{
    int sum = 0;
    for (int i = 0; i < n; i++) 
    {
        if (!is_prime(a[i])) 
        { 
            sum += a[i];
        }
    }
    return sum;
}

void output(int sum) 
{
    printf("The sum of composite numbers in the array is: %d\n", sum);
}

int main() 
{
    int n = input_array_size();
    int a[n];
    input_array(n,a);
    int sum = sum_composite_numbers(n,a);
    output(sum);
    return 0;
}