//iv.Search an element from an array.
#include<stdio.h>
#include<time.h>
#define AS 5
int main()
{
    srand(time(NULL));
    int array[AS],i;
//VALUE ASSIGN
    for (i=0;i<AS;i++)
    {
        array[i]=rand()%50+50;
    }
//SHOW THE VALUE AT THE PRINTF FUNETION
    for (i=0;i<AS;i++)
    {
        printf("\narray[%d] = %d ",i,array[i]);
    }
//searching
    int num,flag=0;
    printf("\nenter a number to search(50-99)=");
    scanf("%d",&num);
    for (i=0;i<AS;i++)
    {
        if(num==array[i])//CHEACK THAT USER IS INPUT EQUAL TO THE ARRAY[I]
        {
            flag =i;
            break;
        }
    }
    if(flag==0)//IF NUM IS NOT FOUND ON ARRAY THEN RUN IT.
    {
        printf("\nnot found");
    }
    else//IF NUM IS FOUND ON ARRAY THEN RUN IT.
    {
        printf("\nFound\n");
        printf("\nlocation = array[%d]\n",flag);
    }


    return 0;
}

