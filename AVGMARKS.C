#include<stdio.h>
#include<conio.h>

main()
{
	float maths,english,science,ans;

	clrscr();

	printf("Enter maths marks : ");
	scanf("%f",&maths);

	printf("Enter english marks : ");
	scanf("%f",&english);

	printf("Enter science marks : ");
	scanf("%f",&science);

	if(maths < 0 || maths > 100)
	{
		printf("Invalid maths marks\n");
	}
	if(english < 0 || english > 100)
	{
		printf("Invalid english marks\n");
	}
	if(science < 0 || science > 100)
	{
		printf("Invalid science marks");
	}

	if(maths < 0 || maths > 100 || english < 0 || english > 100 || science < 0 || science > 100)
	{
	}
	else
	{
		ans = (maths + english + science) / 3;

		printf("Average Marks : %.2f",ans);
	}

	getch();

}