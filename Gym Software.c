/*
Beykoz University - Computer Enginerring
Name: Mert Altuntaş
ID : 1804010005
For Login System;
username = "Mert"
password = "1234"
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>


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
    for (j = 0; j <= 120000000; j++);
  }
  system("cls");
}
//--------------------------------------------------------------------------------------------------------------------------
void new_member()
{
system ("cls");
 
	char isim[30], soyisim[30], branch[30], paymentMethod[5];

	printf ("\nEnter Name : \t");
	scanf("%s", isim);
	printf ("\nEnter Surname : ");
	scanf("%s", soyisim);
	printf ("\nEnter Main Branch : ");
	scanf("%s", branch);
	printf ("\n\nChoose a payment method : ");
			    printf("\n=============================================================\n");
                printf("\n\n\t\tPAYMENT METHODS AND DISCOUNTS\n\n");
                printf("\n\tA- Fitness / Normal Membership : 1 Mounth (5 days a week)- 20$");
                printf("\n\tB- Fitness / Normal Membership : 1 Mounth (3 days a week)- 15$");
                printf("\n\tC- Fitness / Student Discount : 1 Mounth (3 days a week)- 10$\n");
                printf("\n\tD- Swimming / Normal Membership : 1 Mounth (5 days a week)- 25$");
                printf("\n\tE- Swimming / Normal Membership : 1 Mounth (3 days a week)- 20$");
                printf("\n\tF- Swimming / Student Discount : 1 Mounth (3 days a week)- 15$\n");
                printf("\n\tG- Fitness and Swimming / Normal Membership : 1 Mounth (5 days a week)- 40$");
                printf("\n\tH- Fitness and Swimming / Normal Membership : 1 Mounth (3 days a week)- 30$");
                printf("\n\tI- Fitness and Swimming / Student Discount : 1 Mounth (3 days a week)- 20$");
                printf("\n\n=============================================================\n\n");
    printf("Enter the choice with Letter : \t");            
	scanf("%s", paymentMethod);


	FILE * f;
    f = fopen("MemberList.txt" , "a");
    fprintf(f, "%s %s : %s  Option %s\n", isim, soyisim, branch, paymentMethod);
    fclose(f);
  	printf ("\nPress any key to return to the main menu.");
	getch();
	system ("cls");
    main ();
}
//--------------------------------------------------------------------------------------------------------------------------
void member_management()
{
	system ("cls");
    int secim;
    char username[200] = "Mert";
    char password[200] = "1234";
    
    	        printf("\n=============================================================\n");
                printf("\n\n\t\tADMINISTRATIVE LOGIN PAGE");
                printf("\n\n\t1.Login to system with username and password.");
                printf("\n\t2.Sign-up to system.");
                printf("\n\n=============================================================\n\n");

                printf("\n\n\tENTER YOUR CHOICE:\t");
                scanf("%d", &secim);
                
                switch (secim)
                {
                	case 1: loginFunction(username, password);
                	break;
                	
                	case 2: signupFunction();
                	break;
					
					default :
					printf ("\nWrong choice. Please try again.\n");
					break;	
				}
    
}
//--------------------------------------------------------------------------------------------------------------------------
void loginFunction(char username[200], char password[200])
{
	system ("cls");
	char userName[200];
  	char passWord[200];
  	
	tekrar:
    printf("\nPlease enter username: \n");
  	scanf("%s", &userName);
 	printf("Please enter numeric password : \n");
  	scanf("%s", &passWord);

  if (strcmp(username, userName) == 0 && strcmp(password, passWord) == 0) 
  {
    			printf("\n\nLogin successful. Press any key to continue.\n");
    			//Access granted ;
    			getch();
    			x:
    			system ("cls");
    			int secim2;
    			
        	    printf("\n=============================================================\n");
                printf("\n\n\t\tMEMBER MANAGEMENT");
                printf("\n\n\tPlease choose what do you want : ");
                printf("\n\t1.Delete a member.");
                printf("\n\t2.View list of all members.");
                printf("\n\n=============================================================\n\n");
                
                printf("\n\n\tENTER YOUR CHOICE:\t");
                scanf("%d", &secim2);      
                
                
                if(secim2==2)
                {
                	system ("cls");
                	FILE * dosya;
                	char character;
   					dosya = fopen("MemberList.txt" , "r");
   					
   					if(dosya!=NULL)
					{
						character=fgetc(dosya);
						while(character!=EOF)
						{
							printf("%c", character);
							character=fgetc(dosya);
						}
					}
   					else
   					{
   						printf("\nFile does not exist. Try Again.");
   						goto x;
					}
   					fclose(dosya);
   					
  					printf ("\nPress any key to return to the main menu.");
					getch();
					system ("cls");
    				main ();
				}
                
  } 
  
  else 
  {
    printf("\n\nWrong username or password.\nPlease try again or sign up.\n");
    goto tekrar;

  }
}
//--------------------------------------------------------------------------------------------------------------------------
void signupFunction() {
  char username[200];
  char password[200];
  system ("cls");
  
  printf("\nChoose an username : \n");
  scanf("%s", & username);
  printf("Choose a numeric password : \n"),
  scanf("%s", & password);

  printf("\n ***Your account ready to use. Please go back.*** \n");

  loginFunction(username, password);
}
//--------------------------------------------------------------------------------------------------------------------------

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
                printf("\n\tA- Fitness / Normal Membership : 1 Mounth (5 days a week)- 20$");
                printf("\n\tB- Fitness / Normal Membership : 1 Mounth (3 days a week)- 15$");
                printf("\n\tC- Fitness / Student Discount : 1 Mounth (3 days a week)- 10$\n");
                printf("\n\tD- Swimming / Normal Membership : 1 Mounth (5 days a week)- 25$");
                printf("\n\tE- Swimming / Normal Membership : 1 Mounth (3 days a week)- 20$");
                printf("\n\tF- Swimming / Student Discount : 1 Mounth (3 days a week)- 15$\n");
                printf("\n\tG- Fitness and Swimming / Normal Membership : 1 Mounth (5 days a week)- 40$");
                printf("\n\tH- Fitness and Swimming / Normal Membership : 1 Mounth (3 days a week)- 30$");
                printf("\n\tI- Fitness and Swimming / Student Discount : 1 Mounth (3 days a week)- 20$");
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
	
	printf ("Please enter height (dot m): \n");
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
	struct node *p=NULL;
  	FILE *fp= fopen("mother.txt","r");   //stores all names of files (tasks)

  
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
