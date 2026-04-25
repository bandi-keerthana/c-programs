#include <stdio.h>
void main()
{
    int a;
    printf("enter the a value");
    scanf("%d",&a);
    int res=(a>=0)&&(a<=9);
    printf("%d is the digit i.e is:%d",a,res);
    
}