#include<stdio.h>

int main()
{
	float celcius,reamur,fahrenheit;
	printf("Masukan suhu dalam celcius :");
	scanf("%f",&celcius);
	fahrenheit=celcius*9/5+32;
	reamur=celcius*4/5;
	printf("fahrenheit : %8.2f",fahrenheit);
	printf("\nreamur : %8.2f",reamur);
	getchar();
	
}
