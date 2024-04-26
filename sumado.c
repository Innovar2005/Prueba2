#include <stdio.h>
/*Nueva version con tressumandos*/
int main()
{
    int num1, num2, num3, suma;
    printf("Ingrese un primer valor: ");
    scanf("%d", &num1);
    printf("Ingrese un segundo valor: ");
    scanf("%d", &num2);
    printf("Ingrese un tercer valor: ");
    scanf("%d", &num3);
    suma = num1 + num2 + num3;

    printf("%d + %d + %d = %d ", num1, num2, num3, suma);

    return 0;
}
