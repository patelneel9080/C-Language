#include<stdio.h>
#include<conio.h>

main()
{

	int x,y,ans;

	clrscr();

	printf("Enter x : ");
	scanf("%d",&x);

	printf("Enter y : ");
	scanf("%d",&y);

	ans = x*x*x + 3*x*x*y + 3*x*y*y + y*y*y;

	printf("Answer : %d",ans);

	getch();

}