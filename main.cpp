#include<iostream>
using namespace std;
void menu()
{
	cout<<"********MENU********"<<endl;
	cout<<"1 . Check Balance"<<endl;
	cout<<"2 . Deposit Money"<<endl;
	cout<<"3 . Withdraw Money"<<endl;
	cout<<"4 . EXIT "<<endl;
	cout<<"*********************"<<endl;
}

int main()
{
	int Option;
	double Balance=500;
	do {
	menu();
	cout<<"Enter Your Option : ";
	cin>>Option;
	system("cls");
	switch (Option)
	{
	case 1 :
		cout<<"Your Current Balance Is : "<<Balance<<endl;
		break;
	case 2 :
	    cout<<"Enter The Amount You Want To Deposit : ";
		double Deposit;
		cin>>Deposit;
		Balance+=Deposit;
		cout<<"Deposit Succesfull !!"<<endl;
		cout<<"Your Current Balance Is :"<<Balance<<endl;
		break;
	case 3 :
	    cout<<"Enter The Amount You Want To Withdraw : "<<endl;
		double Withdraw;
		cin>>Withdraw;
		if(Balance>=Withdraw)
		{Balance-=Withdraw;
		cout<<"Withdraw Succesfull !!"<<endl;
		cout<<"Your Current Balance Is :"<<Balance<<endl;}
		else 
		{
			cout<<"No Enough Money !!"<<endl;
		}
		break;	
	case 4 :
		cout<<"Thank You For Using Our ATM Machine !!"<<endl;
		break ;
	default :
		cout<<"Invalid Option Entered"<<endl;
		cout<<"Try Again"<<endl;
		break;
	  }
	}
	while(Option!=4);
	return 0;
}