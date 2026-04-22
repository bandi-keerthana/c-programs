#include <stdio.h>
void main()
{
    char CH;
    printf("enter the character");
    scanf("%c",&CH);
    int res=(CH>='a')&&(CH<='z');
    printf("%c is the lowercase i.e is:%d",CH,res);
    
}