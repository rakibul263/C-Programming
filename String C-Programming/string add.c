#include<stdio.h>
#include<string.h>

int main()
{
    char str1[100],str2[100];

    printf("String1: ");
    gets(str1);

    printf("String2: ");
    gets(str2);

    strcat(str1,str2);

    printf("%s", str1);

    return 0;
}
