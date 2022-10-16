#include<stdio.h>
void main()
{
    int i,k=0;
    char str[50],substr[50];
    printf("Enter the string : ");
    scanf("%[^\n]s",str);
    fflush(stdin);
    printf("Enter substring : ");
    scanf("%[^\n]s",substr);
    while(str[i]!='\0' && substr[k]!='\0')
    {
        if(str[i]!=substr[k])
        {
            i++;
            k=0;
        }
        else
        {
            k++;
            i++;
        }
    }
    if(substr[k]=='\0')
        printf("The entered Substring is present in the String");
    else
        printf("The entered Substring is not present in the String");
}
