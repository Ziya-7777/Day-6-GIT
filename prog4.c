#include <stdio.h>
int main()
{

    int a, b, temp;
    printf("Enter the value of a:");
    scanf("%d", &a);

    printf("Enter the value of b:");
    scanf("%d", &b);

    printf("\n Using Third variable");

    printf("\n\n Before swap");
    printf("\n value of a is %d", a);
    printf("\n value of b is %d", b);

    temp = a;
    a = b;
    b = temp;

    printf("\n\n After swap");
    printf("\n value of a is %d", a);
    printf("\n value of b is %d", b);
    return 0;
}