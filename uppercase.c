void main()
{
    char ch;
    printf("enter the character ");
    scanf("%c",&ch);
    int res=(ch>='A')&&(ch<='Z');
    printf("%c is a upper case alphabet i.e is:%d",ch,res);
    
}