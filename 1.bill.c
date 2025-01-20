#include <stdio.h> //printf and scanf
#include <conio.h>
#include <string.h>
float calculateBill(int units);
void main(){
	int units;
	
	printf("enter the consumed units :: ");
	scanf("%d",&units);
	
	calculateBill(units);
	printf("%f",calculateBill(units));
	getch();

}

float calculateBill(int units)
{
	float value;
	if(units >= 0 && units <= 100){
		value = units * 18;
	}else if(units >100 && units <= 200){
		value = units * 22;
	}else if(units > 200 && units <= 300){
		value = units * 26;
	}else if(units > 300 && units <= 700){
		value = units * 30;
	}else{
		value = units * 35;
		
	}
	return value;
	
}



