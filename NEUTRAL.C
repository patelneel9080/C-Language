#include<stdio.h>
#include<conio.h>


main()
{

	int a;

	clrscr();

	printf("Enter value of A : ");
	scanf("%d",&a);


	if(a < 0)
	{
		printf("A is Negative");
	}
	else if(a > 0)
	{
		printf("A is Positive");
	}
	else
	{
		printf("A is Neutral");
	}


	getch();

}