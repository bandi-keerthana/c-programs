
write a program to check the given number is in the range 3-13
#include <stdio.h>
void main()
{
    int a;
    printf("enter the a value");
    scanf("%d",&a);
    int res=(a>=3)&&(a<=13);
    printf("%d is in the range 3-13 i.e is:%d",a,res);
    
}