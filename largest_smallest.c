#include <stdio.h>

int size;
int max, min;
int arr[100];

void findMinMax() 
{
    max = arr[0];
    min = arr[0];
    
    for (int i = 1; i < size; i++) 
    {
        if (arr[i] > max) 
        {
            max = arr[i];
        }
        if (arr[i] < min)
        { 
            min = arr[i];
        }    
    }
}

int main()
{
   

    printf("Enter size of array : ");
    scanf("%d",&size);

    for (int i = 0; i < size; i++) 
    {
        printf("%d: ", i + 1);
        scanf("%d",&arr[i]);
    }

    findMinMax(arr, size);
    printf("Maximum number: %d\n", max);
    printf("Minimum number: %d\n", min);
    
    return 0;
}