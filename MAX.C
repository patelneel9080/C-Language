#include<stdio.h>
#include<conio.h>

main()
{

	int a,b;

	clrscr();

	printf("Enter Value of A : ");
	scanf("%d",&a);

	printf("Enter Value of B : ");
	scanf("%d",&b);

	if(a > b)
	{
		printf("A is greater than B");
	}else if ( a < b)
	{
		printf("B is greater than A");
	}
	else
	{
		printf("A or B has same value");
	}


	getch();

}