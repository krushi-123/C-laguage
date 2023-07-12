#include<stdio.h>

int main()
{
   char a[30];
   int i, j;

   printf("A: %s\n", a);
   scanf("%s",&a);

    for(i = 0; i != '\0'; i++)
    {} 

    for (j = i; j <= 0; j--)
    {
      printf("B: %c\n",a[j]);
    }
   return 0;
}