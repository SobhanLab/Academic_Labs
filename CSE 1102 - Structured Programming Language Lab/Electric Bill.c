#include<stdio.h>
#define MC 30
#define SC 10
#define MIN 20
int main()
{
    int unit;
    float t_bill,Total_bill;
    printf("Enter total Unit: ");
    scanf("%d",&unit);

    if(unit<=75)
    {
        t_bill = unit*4.94;//bill for unit only
    }
    else if(unit>75 && unit<=200)
    {
        t_bill = unit*7.38;//bill for unit only
    }
    else if(unit>200 && unit<=300)
    {
        t_bill = unit*10.56;//bill for unit only
    }
    else
    {
        t_bill = unit*12.18;//bill for unit only
    }

    t_bill = t_bill + MC + SC;//bill with extra charges
    Total_bill = t_bill + t_bill*.05;//bill with vat
    printf("Total Bill = %.2f\n",Total_bill);

    float Penalty_bill, penalty_charge;
    penalty_charge = (MIN>(Total_bill*0.015))? MIN : (Total_bill*0.015);//add maximum penalty
    Penalty_bill = Total_bill + penalty_charge;
    printf("Penalty Bill = %.2f\n",Penalty_bill);

    return 0;


}
