//***************************************************************
//                   HEADER FILE USED IN PROJECT
//****************************************************************


#include<fstream.h>
#include<conio.h>
#include<stdio.h>


//***************************************************************
//                   CLASS USED IN PROJECT
//****************************************************************

class account
{
	int acno;
	char name[50];
	int deposit;
	char type;
public:
	void create_account();	//function to get data from user
	void show_account();	//function to show data on screen
	void modify();   //function to get new data from user
	void dep(int);	//function to accept amount and add to balance amount
	void draw(int);	//function to accept amount and subtract from balance amount
	void report();	//function to show data in tabular format
	int retacno();	//function to return account number
	int retdeposit();	//function to return balance amount
	char rettype();	//function to return type of account
};         //class ends here



//***************************************************************
//    	THE MAIN FUNCTION OF PROGRAM
//****************************************************************


int main()
{
	char ch;
	int num;
	clrscr();
	intro();
	do
	{
		clrscr();
		cout<<"\n\n\n\tMAIN MENU";
		cout<<"\n\n\t01. NEW ACCOUNT";
		cout<<"\n\n\t02. DEPOSIT AMOUNT";
		cout<<"\n\n\t03. WITHDRAW AMOUNT";
		cout<<"\n\n\t04. BALANCE ENQUIRY";
		cout<<"\n\n\t05. ALL ACCOUNT HOLDER LIST";
		cout<<"\n\n\t06. CLOSE AN ACCOUNT";
		cout<<"\n\n\t07. MODIFY AN ACCOUNT";
		cout<<"\n\n\t08. EXIT";
		cout<<"\n\n\tSelect Your Option (1-8) ";
		cin>>ch;
		clrscr();
		switch(ch)
		{
		case '1':
			write_account();
			break;
		case '2':
			cout<<"\n\n\tEnter The account No. : "; cin>>num;
			deposit_withdraw(num, 1);
			break;
		case '3':
			cout<<"\n\n\tEnter The account No. : "; cin>>num;
			deposit_withdraw(num, 2);
			break;
		case '4':
			cout<<"\n\n\tEnter The account No. : "; cin>>num;
			display_sp(num);
			break;
		case '5':
			display_all();
			break;
		case '6':
			cout<<"\n\n\tEnter The account No. : "; cin>>num;
			delete_account(num);
			break;
		 case '7':
			cout<<"\n\n\tEnter The account No. : "; cin>>num;
			modify_account(num);
			break;
		 case '8':
			cout<<"\n\n\tThanks for using bank managemnt system";
			break;
		 default :cout<<"\a";
		}
		getch();
	}while(ch!='8');
	return 0;
}





//****************************************************************
//    	INTRODUCTION FUNCTION
//****************************************************************


void intro()
{
	cout<<"\n\n\n\t\t\t BANK MANAGEMENT SYSTEM";
	cout<<"\n\n\n\nProject made by : Kumar Anurag";
	cout<<"\n\nOrganization : Delhi Technical Campus";
	getch();
}

//***************************************************************
//    			END OF PROJECT
//***************************************************************