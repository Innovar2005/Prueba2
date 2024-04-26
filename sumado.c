#include <stdio.h>

int main()
{
    int num1, num2, suma;
    printf("Ingrese un primer valor: ");
    scanf("%d", &num1);
    printf("Ingrese un segundo valor: ");
    scanf("%d", &num2);
    suma = num1 + num2;

    printf("%d + %d = %d ", num1, num2, suma);

    return 0;
}
