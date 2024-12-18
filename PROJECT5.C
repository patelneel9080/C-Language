#include<stdio.h>
#include<conio.h>
#define PI 3.14

main()
{
	int radius;
	float ans;

	clrscr();

	printf("Enter the value of radius : ");
	scanf("%d",&radius);

	ans = 2 * PI * radius;

	printf("Perimeter of circle is %f",ans);

	getch();

}