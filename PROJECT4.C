#include<stdio.h>
#include<conio.h>

// WAP to find Simple Interest

main()
{
	int p,r,n;
	float ans;

	clrscr();

	printf("Enter the value of principal amount : ");
	scanf("%d",&p);

	printf("Enter the value of rate: ");
	scanf("%d",&r);

	printf("Enter the value of time in a month : ");
	scanf("%d",&n);

	ans = 0.01 * p * r * n;

	printf("Simple interest is %f",ans);

	getch();
}