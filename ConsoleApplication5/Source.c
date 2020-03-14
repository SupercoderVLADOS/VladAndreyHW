#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.14159265
#define SIN(x) sin(PI*x/180)
int main()
{
    int c;
    system("chcp 1251");
    system("cls");
    printf("¬ведите угол в градусах: ");
    scanf("%d", &c);
    printf("sin(%d)=%lf", c, SIN(c));
    getchar(); getchar();
    return 0;
}