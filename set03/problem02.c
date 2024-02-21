// 2. Write a program to find whether the given 3 points form a triangle

#include <stdio.h>

void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3);
int is_triangle(float x1, float y1, float x2, float y2, float x3, float y3);
void output(float x1, float y1, float x2, float y2, float x3, float y3, int result);

int main() 
{
    float x1, y1, x2, y2, x3, y3;
    input_triangle(&x1, &y1, &x2, &y2, &x3, &y3);
    int result = is_triangle(x1, y1, x2, y2, x3, y3);
    output(x1, y1, x2, y2, x3, y3, result);
    return 0;
}

void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3) 
{
    printf("Enter coordinates of first point (x1 y1): ");
    scanf("%f %f", x1, y1);
    
    printf("Enter coordinates of second point (x2 y2): ");
    scanf("%f %f", x2, y2);
    
    printf("Enter coordinates of third point (x3 y3): ");
    scanf("%f %f", x3, y3);
}

int is_triangle(float x1, float y1, float x2, float y2, float x3, float y3) 
{
    if ((x1 - x2) * (y1 - y3) != (x1 - x3) * (y1 - y2))
        return 1; 
    else
        return 0; 
}

void output(float x1, float y1, float x2, float y2, float x3, float y3, int result) 
{
    printf("Coordinates of first point: (%.2f, %.2f)\n", x1, y1);
    printf("Coordinates of second point: (%.2f, %.2f)\n", x2, y2);
    printf("Coordinates of third point: (%.2f, %.2f)\n", x3, y3);
    if (result)
        printf("These points form a triangle.\n");
    else
        printf("These points do not form a triangle.\n");
}