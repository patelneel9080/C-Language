#include<stdio.h>
#include<conio.h>
#include<math.h>

/// Finding Compound Interest


main()
{
	int principle,frequency, timeYear;
	float interest;
	float add,power, amount, divide;
	float ans;

	clrscr();

	printf("Enter Principle : ");
	scanf("%d",&principle);

	printf("Enter Interest : ");
	scanf("%f",&interest);

	printf("Enter Frequency : ");
	scanf("%d",&frequency);

	printf("Enter TimeYear : ");
	scanf("%d",&timeYear);

	power = frequency * timeYear;
	divide =  interest  / (100 * frequency);
	add = 1 + divide;
	amount = principle * pow(add,power);

	printf("Amount : %f\n",amount);


	ans = amount - principle;

	printf("Answer : %f",ans);

	getch();


}