#include<stdio.h>
#include<conio.h>

// Area of triangle

main()
{
	int b,h;
	float ans;

	clrscr();

	printf("Enter the value of base : ");
	scanf("%d",&b);

	printf("Enter the value of height : ");
	scanf("%d",&h);

	ans = 0.5 * b * h;

	printf("Area of triangle is %f",ans);

	getch();
}