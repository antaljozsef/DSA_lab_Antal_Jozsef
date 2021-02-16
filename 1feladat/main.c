#include <stdio.h>
#include <stdlib.h>

int osszead(int a, int b);

int main()
{

    int a, b;
    printf("a= ");
    scanf("%i", &a);
    printf("b= ");
    scanf("%i", &b);

    int osszeadas;

    osszeadas = osszead(a, b);
    printf("%i ", osszeadas);

    return 0;
}
int osszead(int a, int b)
{
    return a + b;
}