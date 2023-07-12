#include<stdio.h>

int main()
{
    int a[30]={1,2,3,4,5}, *p, **q;
    p = &a;
    q = &p;
    /*
    printf("Value of A : %d\n", *p);
    printf("Adress of A : %u\n", p);
    printf("Value of A : %d\n" , **q);
    */

   for (int i = 0; i < 5; i++)
   {
    printf("%d\t%d\n", *(p + i), (p + i));
    printf("%d\t%u\n", &a[i], a[i]);
   }

    return 0;
}