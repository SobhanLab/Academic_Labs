
//02.task=calculate odd sum and even sum.
#include<stdio.h>
#include<time.h>
#define range 5
int main()
{
    srand(time(NULL));
    int array[range],i,sum=0,oddsum=0,evensum=0;
//VALUE ASSIGN
    for (i=0;i<range;i++)
    {
        array[i]=rand()%100;
    }
//SHOW THE VALUE AT THE PRINTF FUNETION
    for (i=0;i<range;i++)
    {
        printf("\narray[%d] = %d ",i,array[i]);
    }
//CALCULATE ODDSUM ALD EVENSUM.
    for (i=0;i<range;i++)
    {
        sum=sum+array[i];
        if(array[i]%2==0)
            evensum=evensum+array[i];
        else
            oddsum=oddsum+array[i];
    }
    printf("\nsum of array = %d ",sum);
    printf("\nevensum of array = %2d ",evensum);
    printf("\noddsum of array = %2d ",oddsum);


    return 0;
}
