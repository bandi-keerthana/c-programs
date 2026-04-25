#include <stdio.h>
void main()
{
    char CH;
    printf("enter the character");
    scanf("%c",&CH);
    int res=(CH=='A')||(CH=='E')||(CH=='I')||(CH=='O')||(CH=='U')||(CH=='a')||(CH=='e')||(CH=='i')||(CH=='o')||(CH=='u');
    printf("%c is a vowel i.e is:%d",CH,res);
    
}