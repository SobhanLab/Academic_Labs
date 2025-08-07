#include <stdio.h>
int main () {

    int a,b;
    float sum,sub,mul,div;
    char sym;
    printf("Enter 1st Number: ");
    scanf("%d", &a);
    printf("Enter 2nd Number: ");
    scanf("%d", &b);

    sum=a+b;
    sub=a-b;
    mul=a*b;
    div=(float) a/b;

    printf("Enter a command (+,-,*,/) : ");
    scanf(" %c",&sym);
    if(sym=='+'){
        printf("%.2f",sum);
    }
    else if(sym=='-'){
        printf("%.2f",sub);
    }
    else if(sym=='*'){
        printf("%.2f",mul);
    }
    else if(sym=='/'){
        printf("%.2f",div);
    }
    else{
        printf("Wrong Command. Please Try Again.");
    }

    return 0;
}
