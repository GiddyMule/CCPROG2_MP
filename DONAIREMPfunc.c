/* LORENZO DONAIRE */ 

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct userinformation
{
	int userID;
	char password[10];
	char name[20];
	char address[30];
	int contact;
	char sex[10];
	char firstdose[10];
	char firstdosevaccine[10];
	char firstdosevaccinelocation[10];
	char seconddose[10];
	char seconddosevaccine[10];
	char seconddosevaccinelocation[10];
	char boosterdose[10];
	char boosterdosevaccine[10];
	char boosterdoselocation[10];	
};

/* THE MAIN MENU FUNCTION **********************************************************/
void mainMenu(struct userinformation userinfo[])
{
	int mainmenuChoice;
	
	printf("=================================================");
	printf("\nWelcome! Please select the option of your choice.");
	printf("\n=================================================");
	printf("\n");
	printf("\n[1] Vaccination Registration Menu");
	printf("\n[2] Data Management Menu");
	printf("\n[3] Exit");
	printf("\n");
	printf("\nYour choice: ");
	
	scanf("%d", &mainmenuChoice);
	
	switch(mainmenuChoice)
	{
		case 1:
			/* launch Vaccination Registration Menu*/
			vaccinationRegistrationMenu(userinfo);
			break;
		case 2:
			/* Data Management Menu */
			dataManagementMenu();
			break;
		case 3:
			/* Exit the program */
			exit(0);
			break;
	}
}
/**************************************************************************************/

/* THE VACCINATION REGISTRATION MENU FUNCTION *****************************************/
void vaccinationRegistrationMenu(struct userinformation userinfo[]) /* function for the displaying of the Vaccination Registration menu */
{
	int menuChoice; /* input for the Vaccination Registration Menu */
	/* char strings to receive for User Registration:
		- userID
		- password
		- name
		- address
		- contact
		- sex
		- first dose
		- first dose vaccine
		- first dose location
		- second dose (optional)
		- second dose vaccine (optional)
		- second dose location (optional)
		- booster dose (optional)
		- booster dose vaccine (optional)
		- booster dose location (optional)
		
	
	/* Vaccination Registration Menu ( sample display of what void func will display. */
	printf("==================================================================================");
	printf("\nWelcome to the Vaccination Registration Menu! Please select an option of your choosing.");
	printf("\n==================================================================================");
	printf("\n");
	printf("\n[1] User Registration"); /* Will call the function for User Registration if selected (must be implemented) */
	printf("\n[2] Vaccination Appointment"); /* Will call the function for Vaccination Appointment if selected (must be implemented) */
	printf("\n[3] Chatbot (FAQs)"); /* Will call the function for the Chatbot if selected (must be implemented) */
	printf("\n[4] Exit"); /* Will be the input to return to the main menu if selected (must be implemented) */
	printf("\n");
	printf("\nYour choice: "); /* Will receive the input from user and call the functions above (must be implemented) */
	scanf("%d",&menuChoice);
	
	switch(menuChoice)
	{
		case 1:
			/* launch User Registration */
			userRegistration(userinfo);
			break;
		case 2:
			/* launch Vacination Appointment */
			vaccineAppointment(userinfo);
			break;
		case 3:
			/* launch ChatBot FAQs */
			break;
		case 4:
			/*return to the main menu */
			mainMenu(userinfo);
			break;
	}
}
/**************************************************************************************/

/* USER REGISTRATION FUNCTION *********************************************************/
void userRegistration(struct userinformation userinfo[])
{
	int i;
	int usernum;
	
	printf("\nEnter number of users");
	printf("\nOption: ");
	scanf("%d",&usernum);
		
	printf("\nPlease enter you details:\n");
	for (i=0;i<usernum;i++)
	{
		printf("\nuser ID: ");
		scanf("%d",&userinfo[i].userID);
		printf("\npassword: ");
		scanf("%s",userinfo[i].password);
		printf("\nname: ");
		scanf("%s",userinfo[i].name);
		printf("\naddress: ");
		scanf("s",userinfo[i].address);
		printf("\ncontact: ");
		scanf("%d",&userinfo[i].contact);
		printf("\nsex: ");
		scanf("%s",userinfo[i].sex);
		printf("\nfirst dose: ");
		scanf("%s",userinfo[i].firstdose);
		printf("\nfirst dose vaccine: ");
		scanf("%s",userinfo[i].firstdosevaccine);
		printf("\nfirst dose vaccine location: ");
		scanf("%s",userinfo[i].firstdosevaccinelocation);
		printf("\nsecond dose (optional): ");
		scanf("%s",userinfo[i].seconddose);
		printf("\nsecond dose vaccine (optional): ");
		scanf("%s",userinfo[i].seconddosevaccine);
		printf("\nsecond dose vaccine location (optional): ");
		scanf("%s",userinfo[i].seconddosevaccinelocation);
		printf("\nbooster dose (optional): ");
		scanf("%s",userinfo[i].boosterdose);
		printf("\nbooster dose vaccine (optional): ");
		scanf("%s",userinfo[i].boosterdosevaccine);
		printf("\nbooster dose location (optional): ");
		scanf("%s",userinfo[i].boosterdoselocation);
	}
	
	printf("\nYour data has been processed. Thank you!\n");
	printf("\n");
	vaccinationRegistrationMenu(userinfo);
}
/**************************************************************************************/

/* VACCINE APPOINTMENT FUNCTION *******************************************************/
vaccineAppointment(struct userinformation userinfo[])
{
	int idAccess, usernum;
	int i = 0;
	
	printf("\nEnter user ID: ");
	scanf("%d", &idAccess);
	/* Implement user id and password recognition before function*/
	
	/*************************************************************/
	
	
}
/**************************************************************************************/

/* THE DATA MANAGEMENT FUNCTION *******************************************************/
void dataManagementMenu()
{
	int menuChoice;
	
	printf("==================================================================================");
	printf("\nWelcome to the Data Management Menu! Please select an option of your choosing."); 
	printf("\n==================================================================================");
	printf("\n");
	printf("\n[1] User"); /* Will call the function for User info if selected (must be implemented) */
	printf("\n[2] Appointment"); /* Will call the function for  Appointment info if selected (must be implemented) */
	printf("\n[3] Chatbot"); /* Will call the function for the Chatbot options if selected (must be implemented) */
	printf("\n[4] Export"); /* Will call the function to export a file if selected (must be implemented) */
	printf("\n[5] Import"); /* will call the function to  import a file if selected (must be implemented) */
	printf("\n[6] Exit Menu"); /* will call the function to save all files in text and terminate the program (must be implemented) */
	printf("\n");
	printf("\nYour choice: "); /* Will receive the input from user and call the functions above (must be implemented) */
	scanf("%d",&menuChoice);
	
	switch(menuChoice)
	{
		case 1:
			/* launch User info and options */
			break;
		case 2:
			/* launch Appointment info and options */
			break;
		case 3:
			/* launch ChatBot info and options */
			break;
		case 4:
			/* launch Export */
			break;
		case 5:
			/* launch import */
			break;
		case 6:
			/* save files in text and termnate program */
			exit(0);
			break;
	}
}
