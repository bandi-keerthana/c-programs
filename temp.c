#include <stdio.h>
void main()
{
    int temp;
    printf("enter the value of temperature:\n");
    scanf("%d",&temp);
    int summer;
    printf("enter 1 for summer and 0 dor winter");
    scanf("%d",&summer);
    if(summer==0)
    {
        if(temp>=60&&temp<=100)
        {
            printf("true");
        }
        else
        {
            printf("false");
        }
    }
    else
    {
        if(temp>=60&&temp<=90)
        {
            printf("true");
        }
        else
        {
            printf("false");
        }
    }
    
    
}