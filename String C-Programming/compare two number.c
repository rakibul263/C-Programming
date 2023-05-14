#include<stdio.h>
#include<string.h>
int main()
{
    char str1[]="Rakibul";
    char str2[]="Shuvo";

    int d=strcmp(str1,str2);

    if(d==0)
    {
        printf("Same\n");
    }
    else
    {
        printf("Not same\n");
    }
    return 0;
}
