#include<stdio.h>
#include<conio.h>
#define PI 3.14

main()
{
	int r;
	float ans;

	clrscr();

	printf("Enter the value of radius : ");
	scanf("%d",&r);

	ans = PI * r * r;

	printf("Area of Circle is %f",ans);

	getch();

}
