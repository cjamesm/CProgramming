// CProgramming.cpp : Defines the entry point for the console application.
//
//int fahrToCelsius()
//int celsiusToFahr()
//int fahrToCelsiusForDesc()

#include <stdio.h>


int main()
{
	int c;

	while ((c = getchar()) != EOF)
	{
		putchar(c);
	}



}

int fahrToCelsiusForDesc()
{
	int fahr;

	for (fahr = 300; fahr >= 0; fahr -= 20)
		printf("%3d %6.1f\n", fahr, (5.0 / 9.0)*(fahr - 32));
}


int celsiusToFahr()
{
	float celsius, fahr;
	int lower, upper, step;
	lower = -200;
	upper = 200;
	step = 20;


	celsius = lower;
	printf("Celsius Fahr\n");
	while (celsius <= upper)
	{
		fahr = 9.0*celsius / 5.0 + 32.0;
		printf("%6.0f %6.1f\n", celsius, fahr);
		celsius += step;
	}
}





int fahrToCelsius()
{
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	fahr = lower;
	printf("Fahr Celsius\n");
	while (fahr <= upper)
	{
		celsius = (5.0 / 9.0) * (fahr - 32.0);
		printf("%3.0f %6.1f\n", fahr, celsius);
		fahr = fahr + step;
	}

}

