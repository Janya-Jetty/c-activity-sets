// 03.  Write a program find whether a number is a composite number

#include<stdio.h>

int input_number();
int is_composite(int n);
void output(int n, int result);

int input_number()
{
    int x;
    printf("Enter the value of:\n");
    scanf("%d",&x);
    return x;
}

int is_composite(int n)
{
    if(n <= 1)
    {
        return 0;
    }
    int count = 0;
    for(int i = 2; i <= n/2; i++)
    {
        if(n % i == 0)
        {
            count++;
        }
    }
    if (count > 0)
        return 1;  

    else 
        return 0;
}

void output(int n, int result)
{
    if(result)
    {
        printf("%d is a composite number\n",n);
    }
    else
    {
        printf("%d is not a composite number\n",n);
    }
}

int main()
{
    int x,result;
    x = input_number();
    result = is_composite(x);
    output(x,result);    
    return 0;
}