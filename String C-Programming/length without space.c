#include<stdio.h>
int main()
{
    char *str="I love Bangladesh";


    int i=0;
    int len=0;

    while(str[i]!='\0')
    {

        if(str[i]!=' ')
        {
            len++;
        }
        i++;


    }
    printf("%d\n",len);

    return 0;
}




/*#include<string.h>
int main()
{

    char str[]="I love Bangladesh";

    int d=strlen(str);

    printf("%d",d);
}
*/
