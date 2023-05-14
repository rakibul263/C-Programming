#include<stdio.h>

int main()
{
    char str1[30]="Rakibul Hasan";
    char str2[30];

    int i=0,j,len=0;
    while(str1[i]!='\0')
    {
        i++;
        len++;
    }
    for(j=0,i=len-1;i>=0;i--,j++)
    {
        str2[j]=str1[i];
    }
    str2[j]='\0';

    printf("%s\n",str2);

    return 0;
}
