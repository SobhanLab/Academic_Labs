//viii.sort elements of an array in ascending and descending order.
#include<stdio.h>
#include<time.h>
#define AS 5
int main()
{
    srand(time(NULL));
    int array[AS],i,a,j;
//VALUE ASSIGN
    for (i=0;i<AS;i++)
    {
        array[i]=rand()%100;
    }
//SHOW THE VALUE AT THE PRINTF FUNETION
    for (i=0;i<AS;i++)
    {
        printf("array[%d] = %d \n",i,array[i]);
    }
//CHEACKING THE ASCENDING
    for (i=0;i<AS;i++)
    {
        for(j=i+1;j<AS;j++)
        {
            if(array[i]>array[j])
            {
                a=array[i];
                array[i]=array[j];
                array[j]=a;
            }
        }
    }
    printf("\nElements of array are sorted in Ascending order:\n");
    for (i=0;i<AS;i++)
    {
        printf("%d,\t",array[i]);
    }
//CHEACKING THE DESCENDING
    for (i=0;i<AS;i++)
    {

        for(j=i+1;j<AS;j++)
        {
            if(array[i]<array[j])
            {
                a=array[i];
                array[i]=array[j];
                array[j]=a;
            }
        }
    }
    printf("\nElements of array are sorted in Descending order:\n");
    for (i=0;i<AS;i++)
    {
        printf("%d,\t",array[i]);
    }



    return 0;
}

