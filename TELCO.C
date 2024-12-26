#include<stdio.h>
#include<conio.h>

main()
{
	int language,recNo;

	clrscr();

	printf("Press 1 for English\n");
	printf("Press 2 for Hindi\n");
	printf("Press 3 for Gujarati\n");

	printf("Select Language : ");
	scanf("%d",&language);

	switch(language)
	{
		case 1:
			printf("Press 1 for Internet Recharge\n");
			printf("Press 2 for Top-up Recharge\n");
			printf("Press 3 for Special Recharge\n");

			printf("Enter your choice : ");
			scanf("%d",&recNo);

			switch(recNo)
			{
			 case 1 :
				printf("You have successfully done a Internet Recharge");
				break;
			 case 2:
				printf("You have successfully done a Top-up Recharge");
				break;
			 case 3:
				printf("You have successfully done a Special Recharge");
				break;
			 default:
				printf("Invalid choice...");
			}
			break;
		case 2 :
			printf("Internet Recharge ke liye 1 dabaiye\n");
			printf("Top-up Recharge ke liye 2 dabaiye\n");
			printf("Special Recharge ke liye 3 dabaiye\n");

			printf("Enter your choice : ");
			scanf("%d",&recNo);

			switch(recNo)
			{
			 case 1 :
				printf("Aapne safaltapurvak Internet Recharge kar liya he");
				break;
			 case 2:
				printf("Aapne safaltapurvak Top-up Recharge kar liya he");
				break;
			 case 3:
				printf("Aapne safaltapurvak Special Recharge kar liya he");
				break;
			 default:
				printf("Galat choice...");
			}
			break;
		case 3 :
			printf("Internet Recharge mate 1 dabavo\n");
			printf("Top-up Recharge mate 2 dabavo\n");
			printf("Special Recharge mate 3 dabavo\n");

			printf("Enter your choice : ");
			scanf("%d",&recNo);

			switch(recNo)
			{
			 case 1 :
				printf("Tame safaltapurvak Internet Recharge karyu che");
				break;
			 case 2:
				printf("Tame safaltapurvak Top-up Recharge karyu che");
				break;
			 case 3:
				printf("Tame safaltapurvak Special Recharge karyu che");
				break;
			 default:
				printf("Khoti choice...");
			}
			break;
		default:
			printf("Language Not Available");

	}


	getch();

}