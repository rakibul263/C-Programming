#include<stdio.h>
#include<string.h>

int main()
{
    char str1[100],str2[100];

    printf("String1: ");
    gets(str1);
    printf("string2: ");
    gets(str2);

    int d = strcmp(str1,str2);

    if(d==0)
        printf("Same\n");
    else
        printf("Not same\n");

    return 0;
}

