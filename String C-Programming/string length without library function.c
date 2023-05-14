#include<stdio.h>
int main()
{
    char s1[]="Daffofil";

    int index=0;
    int count=0;

    while (s1[index]!='\0')
    {
        count++;
        index++;
    }
    printf("%d\n",count);
    return 0;
}
