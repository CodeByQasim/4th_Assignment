#include <stdio.h>
#include <conio.h>
float calculateFeulCost (float distance, float fuelAvr, float fuelPrice);
void main(){
	
	float distance;
	float fuelAvr; 
	float fuelPrice;
//	float result;
	
	
	printf("Enter the distance{in Kilometer } :: ");
	scanf("%f",&distance);
	printf("Enter the vehicle fuel consumption{Km/liter} :: ");
	scanf("%f",&fuelAvr);
	printf("Enter the Current price of petrol :: ");
	scanf("%f",&fuelPrice);
	
	printf("the price is %f",calculateFeulCost (distance, fuelAvr, fuelPrice));
//	float result = calculateFeulCost(distance, fuelAvr, fuelPrice);
	getch();
	
	
	
}
float calculateFeulCost (float distance, float fuelAvr, float fuelPrice)
{
	
	float product = (distance / fuelAvr) * fuelPrice;
//	printf("the total price is %f",product);
	
	return product;
}

