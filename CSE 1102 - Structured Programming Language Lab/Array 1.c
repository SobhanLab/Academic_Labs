#include<stdio.h>
int main ()
{
    int arr[100], i;
    for (i=0; i<100; i++)

    {
        arr[i] = 5;
    }
    for (i=0; i<100; i++)
    {
        printf("arr[%d] = %d\n", i,arr[i]);
    }

    return 0;
}
