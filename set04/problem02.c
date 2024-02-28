// 2. Write a program to find the smallest of three fractions

#include <stdio.h>

typedef struct {
    int num, den;
} Fraction;

Fraction find_smallest(Fraction fractions[], int size);

int main() {
    Fraction fractions[3];

    printf("Enter three fractions (numerator denominator):\n");
    for (int i = 0; i < 3; ++i) {
        scanf("%d %d", &fractions[i].num, &fractions[i].den);
    }

    Fraction smallest = find_smallest(fractions, 3);

    printf("The smallest fraction is: %d/%d\n", smallest.num, smallest.den);

    return 0;
}

Fraction find_smallest(Fraction fractions[], int size) 
{
    Fraction smallest = fractions[0];
    for (int i = 1; i < size; ++i) 
    {
        double value1 = (double)smallest.num / smallest.den;
        double value2 = (double)fractions[i].num / fractions[i].den;
        if (value2 < value1)
        {
            smallest = fractions[i];
        }
    }
    return smallest;
}