Àbɖùlläh Àl Mähfùz
//iii.calculate the sum of all prime number in an array.
#include <stdio.h>
#include<time.h>
#define r 10
int main()
{
    srand(time(NULL));
    int array [r],i,j,sum=0,prime;
    for(i=0;i<r;i++)
    {
        array[i]=rand()%5;
    }
    for( i=0;i<r;i++)
    {
        printf("\narray[%2d]=%2d",i,array[i]);
    }
    printf("\n");

    for(i =0;i<r;i++)
    {
        prime=1;
        for(j=2;j<=array[i]/2;j++)
        {
            if((array[i]%j)==0)
            {
            prime=0;
            break;
            }
        }
    if (prime && array[i] >1)
    {
        sum=array[i]+sum;
        printf("\tsum of (array[%d]'%d')=%d",i,array[i],sum);
    }
    }
    printf("\n%d is the sum of  prime number in the random array.\n", sum);

    return 0;
}
