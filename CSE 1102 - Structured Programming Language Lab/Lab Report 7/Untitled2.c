//iv.Search an element from an array.
#include<stdio.h>
int main()
{
    int array[10],i;
//VALUE ASSIGN
    for (i=0;i<10;i++)
    {
        array[i]=rand()%50+50;
    }
//SHOW THE VALUE AT THE PRINTF FUNETION
    for (i=0;i<10;i++)
    {
        printf("\narray[%d] = %d ",i,array[i]);
    }
//searching
    int num,flag=0;
    printf("\nenter a number to search(50-99)=");
    scanf("%d",&num);
    for (i=0;i<100;i++)
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
