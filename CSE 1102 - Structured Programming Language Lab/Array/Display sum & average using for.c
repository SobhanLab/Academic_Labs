//a program that user input 5 numbers, and display sum & average

#include<stdio.h>

int main ()

{
    int a[5], sum=0, i;

    printf("Enter 5 Number: ");
    for(i=0; i<5; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i=0; i<5; i++)
    {
        sum=sum+a[i];
    }
    printf("The Sum is: %d\n", sum);
    printf("The average is: %.2f\n", (float)sum/5);

return 0;
}
