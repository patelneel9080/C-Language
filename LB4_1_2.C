#include<stdio.h>
#include<conio.h>


main()
{
	int x,y,ans;

	clrscr();

	printf("Enter x value : ");
	scanf("%d",&x);

	printf("Enter y value : ");
	scanf("%d",&y);

	ans = x*x - 2*x*y + y*y;

	printf("Answer : %d",ans);

	getch();

}