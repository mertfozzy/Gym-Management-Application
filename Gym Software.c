/*
Beykoz University - Computer Enginerring
Name: Mert Altuntaş
ID : 1804010005
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

//--------------------------------------------------------INTRO------------------------------------------------------------------
void intro_ekrani(){
  printf("\n----------------------------------\n");
  printf("|  Software Engineering Project  |");
  printf("\n----------------------------------\n");
  printf("|     Made By: Mert Altuntas     |");
  printf("\n----------------------------------\n");
  printf("|\t  ID:   1804010005       |");
  printf("\n----------------------------------\n\n\n");

  printf("Loading  ");
  int j, a;
  for (a = 0; a <= 5; a++) {
    printf(".");
    for (j = 0; j <= 380000000; j++);
  }
  system("cls");
}
//--------------------------------------------------------------------------------------------------------------------------
void new_member ()
{
	system ("cls");
	
	char isim[10], soyisim[10], branch[20];
	
	printf ("\nEnter Name : \t");
	scanf("%s", isim);
	printf ("\nEnter Surname :\t");
	scanf("%s", soyisim);
	printf ("\nEnter Branch : \t");
	scanf("%s", branch);
	
	FILE * f, * f2;
    f = fopen("MemberList.txt" , "w");
    fprintf(f, "%s\t%s\t : %s\n", isim, soyisim, branch);
    fclose(f);
    
    printf ("\n\nMember recorded to the database successfully.");
  	printf ("\nPress any key to return to the main menu.");
	
	getch();
	system ("cls");
    main ();
}
//--------------------------------------------------------------------------------------------------------------------------
void member_management()
{
	
}
//--------------------------------------------------------------------------------------------------------------------------
void schedule ()
{
	
}
//--------------------------------------------------------------------------------------------------------------------------
void bill_management ()
{
	
}
//--------------------------------------------------------------------------------------------------------------------------
void payment_methods ()
{
	system ("cls");
		        printf("\n=============================================================\n");
                printf("\n\n\t\tPAYMENT METHODS AND DISCOUNTS\n\n");
                printf("\n\t- Fitness / Normal Membership : 1 Mounth (5 days a week)- 20$");
                printf("\n\t- Fitness / Normal Membership : 1 Mounth (3 days a week)- 15$");
                printf("\n\t- Fitness / Student Discount : 1 Mounth (3 days a week)- 10$\n");
                printf("\n\t- Swimming / Normal Membership : 1 Mounth (5 days a week)- 25$");
                printf("\n\t- Swimming / Normal Membership : 1 Mounth (3 days a week)- 20$");
                printf("\n\t- Swimming / Student Discount : 1 Mounth (3 days a week)- 15$\n");
                printf("\n\t- Fitness and Swimming / Normal Membership : 1 Mounth (5 days a week)- 40$");
                printf("\n\t- Fitness and Swimming / Normal Membership : 1 Mounth (3 days a week)- 30$");
                printf("\n\t- Fitness and Swimming / Student Discount : 1 Mounth (3 days a week)- 20$");
                printf("\n\n=============================================================\n\n");
    getch();
	system ("cls");
    main ();
}
//--------------------------------------------------------------------------------------------------------------------------
void bmi_calculation ()
{
	system ("cls");
	float height, weight, bmi=0;
	int age;
		
	printf ("\nPlease enter weight (kg): \n");
	scanf ("%f", &weight);
	
	printf ("Please enter height (m): \n");
	scanf ("%f", &height);
	
	bmi = weight / (height*height);

	
	if (bmi < 18.50)
	{
		printf ("\n\nYou are below your ideal weight.\n\n");
		printf ("The result is : %.2f\n\n", bmi);
	}
	
	else if (bmi >= 18.50 && bmi < 24.99)
	{
		printf ("\n\nYour weight is ideal.\n\n");
		printf ("The result is : %.2f\n\n", bmi);
	}
	
	else if (bmi > 25)
	{
		printf ("\n\nYou are above your ideal weight.\n\n");
		printf ("The result is : %.2f\n\n", bmi);
	}
	
	printf ("Press any key to return to the main menu.\n");
	
	getch();
	system ("cls");
    main ();
}

//--------------------------------------------------------MAIN-------------------------------------------------------------------
int main ()
{
				intro_ekrani();
				
				int rakam;
	            printf("\n=============================================================\n");
                printf("\n\n\t\tWELCOME TO GYM MANAGEMENT SOFTWARE");
                printf("\n\n\t1. CREATE A NEW MEMBER");
                printf("\n\t2. MEMBER MANAGEMENT (requires admin login)");
                printf("\n\t3. VIEW PERSONAL SCHEDULE BY MEMBER NAME");
                printf("\n\t4. CHECK THE BILLS BY MEMBER NAME");
                printf("\n\t5. REVIEW PAYMENT METHODS & DISCOUNTS");
                printf("\n\t6. MAKE A BMI CALCULATION");
                printf("\n\t7. EXIT");
                printf("\n\n=============================================================\n\n");

                printf("\n\n\tENTER YOUR CHOICE:\t");
                scanf("%d", & rakam);
    switch(rakam)
	{
	
	case 1 : new_member();
	break;
	
	case 2 : member_management();
	break;
	
	case 3 : schedule ();
	break;	
	
	case 4 : bill_management ();
	break;
	
	case 5 : payment_methods ();
	break;
	
	case 6 : bmi_calculation ();
	break;
	
	case 7 : printf("\n\n\tTHANK YOU\n");
			 exit(0);
	break;
	
	default: printf("\nWrong choise. Please enter the correct numbers to use program.\n");
    break;
	
	}

}
