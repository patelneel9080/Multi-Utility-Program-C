#include<stdio.h>
#include<conio.h>


main()
{
	int salary;
	float hra,da,ta, grossSalary;

	clrscr();

	printf("Enter Base Salary : ");
	scanf("%d",&salary);

	hra = (salary * 0.1);
	da = (salary * 0.05);
	ta = (salary * 0.08);

	grossSalary = salary + hra + da + ta;

	printf("HRA = 10% , DA = 5% , TA = 8%\n");
	printf("Gross Salary : %.1f",grossSalary);


	getch();

}