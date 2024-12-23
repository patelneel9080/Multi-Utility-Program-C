#include<stdio.h>
#include<conio.h>

main()
{
	int angle1 , angle2 , angle3;

	clrscr();

	printf("Enter Angle 1 : ");
	scanf("%d",&angle1);

	printf("Enter Angle 2 : ");
	scanf("%d",&angle2);

	angle3 = 180 - angle1 - angle2;

	printf("Third Angle : %d",angle3);

	getch();

}