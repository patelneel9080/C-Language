#include<stdio.h>
#include<conio.h>

// WAP To Find minimum number using ternary

main()
{
	int a,b,c;

	clrscr();

	printf("Enter value of a , b and c : ");
	scanf("%d %d %d",&a, &b, &c);

	(a == b && b == c)
		? printf("All values are same...")
		: (a > b) ? (a > c)
					  ? printf("A is max")
					  : printf("C is max")
				  : (b > c)
					  ? printf("B is max")
					  : printf("C is max");


	getch();

}