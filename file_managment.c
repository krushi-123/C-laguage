#include<stdio.h>

int main()
/*{
    FILE *fp;
    fp = fopen("kittu.exe","w+");

    fprintf(fp,"HELLO EVERYONE, THIS IS KITTU.....\n");
    fputs("NICE TO MEET YOU ALL>...\n",fp);

    fclose(fp);

}*/
{
    FILE *fp;
    char buff [250];

    fp = fopen("kittu.txt","r");
    while (fscanf (fp, "%s", buff) != EOF)
    {
        printf("&s",buff);
    }

    fclose(fp);
}
