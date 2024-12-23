#include<stdio.h>
#include<conio.h>

main()
{

	int celsius;
	float fahr;

	clrscr();

	printf("Enter Celsius : ");
	scanf("%d",&celsius);

	fahr = (1.8 * celsius) + 32;

	printf("Fahrenhite : %.1f",fahr);

	getch();

}


