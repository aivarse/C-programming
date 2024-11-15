/*
 
 
 addded a comment
 */


#include <stdio.h>


int LoanBalance() {
    
    float i, m;
    int a;
    
    printf("Enter loan amount: \n");
    scanf("%d",&a);
    
    printf("Enter interest rate: ")
    
    
    
    
    
    }




int DollarBills() {
    
int x, tw, tn, fv, one;

printf("Enter the dollar amount: ") ;
scanf("%d",&x);

tw=x/20;

tn=(x-tw*20)/10;


fv=(x-tw*20-tn*10)/5;
one=(x-tw*20-tn*10-fv*5);

printf("$20 bills: %d\n",tw);
printf("$10 bills: %d\n", tn);
printf(" $5 bills: %d\n", fv);
printf(" $1 bills: %d\n", one);
    
    return 0;
}


int PoliNominal ()
{
    
    int x,y;
    
    printf("Enter the x: ");
    scanf("%d",&x);
    
    y=((((3*x+2)-5)*x-1)*x+7)*x-6;
    
    printf("Polinominal value is: %d",y);
    
    return 0;
    
    
    }




int main(int argc, char **argv)
{
    
    
DollarBills();  
//PoliNominal();


    
    return 0;
}


