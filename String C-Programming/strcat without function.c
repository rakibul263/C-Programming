#include<stdio.h>
#include<string.h>

int main()
{
    char str1[50]="My name is ";
    char str2[]="Rakibul Hasan";

    int i=0;
    int len=0;
    int j=0;
    while(str1[i]!='\0')
    {
        i++;
        len++;
    }
    while(str2[j]!='\0')
    {
        str1[len+j]=str2[j];
        j++;
    }
    printf("%s",str1);
    return 0;
}
