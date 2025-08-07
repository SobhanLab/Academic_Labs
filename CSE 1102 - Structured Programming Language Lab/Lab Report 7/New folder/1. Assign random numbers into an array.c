//Write a C program to assign random numbers into an array.[Hint : rand()]

#include<stdio.h>
int main()
{
    int array[10],i;
    for (i=0;i<10;i++)
    {
        array[i]=rand()%100;
    }
    for (i=0;i<10;i++)
    {
        printf("\narray[%2d] = %2d ",i,array[i]);
    }

    return 0;
}
