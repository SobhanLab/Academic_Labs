//vi.HOME WORK=Find the MAX/MIN element in an array.
#include<stdio.h>
#include<time.h>
int main()
{
    srand(time(NULL));
    int array[10],i,max,min,maxin,minin;
//VALUE ASSIGN
    for (i=0;i<10;i++)
    {
        array[i]=rand()%10;
    }
//SHOW THE VALUE AT THE PRINTF FUNETION
    for (i=0;i<10;i++)
    {
        printf("\narray[%d] = %d ",i,array[i]);
    }
//CHEACKING THE MAXIMUM AND MiNIMUM VALUE
    max=array[0];
    min=array[0];
    for (i=0;i<10;i++)
    {
        if(max<array[i])
        {
            max=array[i];
            maxin=i;
        }
        if(min>array[i])
        {
            min=array[i];
            minin=i;
        }

    }
    printf("\nMaximum value of array[%d] = %d ",maxin,max);
    printf("\nMinimum value of array[%d] = %d ",minin,min);

    return 0;
}
