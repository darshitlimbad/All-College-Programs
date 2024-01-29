#include<conio.h>
#include<stdio.h>

struct data
{
	int id;
	char name[200];
	char email[20];
	char password[10];
	char dob[10];
	char city[8];
	char conumber[10];
}details;

struct choose
{
	int name;
	int email;
	int password;
	int dob;
	int city;
	int conumber;
}c;

void main()
{
	char temp;
	clrscr();
	reset:
	{

		printf("\t\twelcome to your login page\n");

		printf("id:");
		scanf("%d",&details.id);

		printf("name:");
		scanf("%s",&details.name);

		printf("email:");
		scanf("%s",&details.email);

		printf("password:");
		scanf("%s",&details.password);

		printf("DOB");
		printf("\nit should be in the form of dd-mm-yyyy : ");
		scanf("%s",&details.dob);

		printf("city :");
		scanf("%s",&details.city);

		printf("contact number:");
		scanf("%s",&details.conumber);


		printf("IF YOU WANT TO DO RESET TYPE R :\n");
		printf("IF YOU WANT TO DELETE TYPE D :\n");
		printf("IF YOU WANT TO CHOSE WHAT TO DISPLAY TYPE I :\n");
		cscanf("%c",&temp);

		switch(temp)
		{
			case 'r':
			case 'R':
				goto reset;
			break;

			case 'd':
			case 'D':
				exit(0);
			break;

			case 'i':
			case 'I':
				printf("\nchoose what to display:\n");
				printf("if print then type 1 and if not then type any key \n");

				printf("name:");
				scanf("%d",&c.name);

				printf("email:");
				scanf("%d",&c.email);

				printf("password:");
				scanf("%d",&c.password);

				printf("DOB:");
				scanf("%d",&c.dob);

				printf("city:");
				scanf("%d",&c.city);

				printf("contect number:");
				scanf("%d",&c.conumber);
			break;

		}
		printf("\nid : %d\n",details.id);

		if(c.name==1)
			printf("name:%s\n",details.name);

		else
		    printf("user choose to hide name:)\n");

		if(c.email==1)
			printf("email:%s\n",details.email);

		else
			printf("user choose to hide email:)\n");

		if(c.password==1)
			printf("password :%s\n",details.password);

		else
			printf("user choose to hide password:)\n");

		if(c.dob==1)
			printf("DOB :%s\n",details.dob);


		else
			printf("user choose to hide DOB :)\n");

		if(c.conumber==1)
			printf("name:%s\n",details.conumber);

		else
			printf("user choose to hide number :)");

	 }
}
//darshit limbad