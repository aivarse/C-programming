/*
 
 */


#include <stdio.h>


int PoliNominal ()
{
	
	int x,y;
	
	printf("Enter the x: ");
	scanf("%d",&x);
	
	y=3*x*x*x*x*x+2*x*x*x*x-5*x*x*x-x*x+7*x-6;
	
	printf("Polinominal value is: %d",y);
	
	return 0;
	
	
	}




int main(int argc, char **argv)
{
	
	/*
	float x,y;
	
	printf("Enter the dollar amount: ");
	scanf("%f",&x);
	
	y=x*1.05;
	printf("With tax added: $%.2f",y);
	*/
	
PoliNominal();
	
	return 0;
}


