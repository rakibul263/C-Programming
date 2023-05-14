#include<stdio.h>

int main()
{
   char source[] ="C Programming";
   char target[100];

   strcpy(target,source);

   printf("Source string = %s\n",source);
   printf("Target string = %s\n",source);

   return 0;
}
