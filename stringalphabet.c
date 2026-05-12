#include <stdio.h>
#include<string.h>
void main()
{
   char str[27];
   printf("enter the string:\n");
   scanf("%s",&str);
   for(int i=0;i<=strlen(str)-1;i++)
   {
       if(str[i]>='A'&& str[i]<='Z')
       {
           printf("%c",str[i]);
       }
   }
}