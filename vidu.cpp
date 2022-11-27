#include <stdio.h>
int main()
{
    int a , b;
    scanf("%d%d", &a, &b);
    if(a == 0 && b == 0)
    printf("phuong trinh vo so nghiem");
    else if(a==0 && b!=0)
    printf("Phuong trinh vo nghiem");
    else
    printf("%f", (-b*1.0)/a);
    return 0;
}