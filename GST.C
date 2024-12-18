#include<stdio.h>
#include<conio.h>

/// GST Finder

main()
{
	int amount ,rate ,tax ,payable;

	clrscr();

	printf("Enter Amount : ");
	scanf("%d",&amount);

	printf("Enter rate : ");
	scanf("%d",&rate);

	tax = amount * rate * 0.01;

	payable = amount + tax;

	printf("Tax : %d\n",tax);
	printf("Amount Payable : %d",payable);

	getch();

}