#include <stdio.h>
int main()
{

    int a,b;
    printf("Enter the value of a :");
    scanf("%d",&a);

    printf("Enter the value of b :");
    scanf("%d",&b);

    printf("\n without using third variable");

    printf("\n\n Before Swap");
    printf("\na is %d",a);
    printf("\nb is %d",b);
   
    a=a+b;
    b=a-b;
    a=a-b;
    
    printf("\n\n After Swap");
    printf("\na is %d",a);
    printf("\nb is %d",b);
    return 0;
}