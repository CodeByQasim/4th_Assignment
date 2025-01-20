#include <stdio.h>
#include <conio.h>
float convert(float amount,char currencyType){
	if(currencyType == 'd' || currencyType == 'D'){
		return (amount /280);
	}
	else if(currencyType == 'a' || currencyType == 'A'){
		return (amount / 75.85);
	}else if(currencyType == 's' || currencyType == 'S'){
		return (amount / 74.25);
	}else{

	}
}

void main(){
	float amount;
	char currencyType;
	printf("Enter the type of currency [USD 'D',AED 'A',SAR 'S'] ");
	scanf(" %c",&currencyType);
	printf("\nEnter the amount : ");
	scanf(" %f",&amount);
	
	printf("your Value is :: %f",convert(amount,currencyType));
	getch();
	
	
}
