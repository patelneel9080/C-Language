#include<stdio.h>
#include<conio.h>

main()
{
	int x,y,z;

	clrscr();

	printf("Enter x value : ");
	scanf("%d",&x);

	printf("Enter y value : ");
	scanf("%d",&y);

	z = x;
	x = y;
	y = z;

	printf("Value of x is %d\n", x);
	printf("Value of y is %d",y);

	getch();

}