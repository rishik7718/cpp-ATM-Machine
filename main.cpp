#include<iostream>
using namespace std;
void showMenu()
{
	cout<<"********MENU********"<<endl;
	cout<<"1 . CHEAK BALANCE"<<endl;
	cout<<"2 . DEPOSIT MONEY"<<endl;
	cout<<"3 . WITHDRAW MONEY"<<endl;
	cout<<"4 . VEIW TRANSACTION HISTORY "<<endl;
	cout<<"5 . EXIT MENU"<<endl;
	cout<<"*********************"<<endl;
}


int main()
{
	int Option;
	double transaction=0;
	double initialBALANCE=500;
	double BALANCE = initialBALANCE;
    double Deposit = 0;
    double Withdraw = 0;
    int depocount=0;
    int withcount=0;
	do {
		showMenu();
	cout<<"Enter The Option : ";
	cin>>Option;
	system("cls");
	
	
	switch(Option){
		case 1 :
			cout<<"Your Current Balance Is : "<<BALANCE<<" rupees"<<endl;
			break;
		case 2 :
		    cout<<"Enter The Amount You Want To Deposit : ";
		
			cin>>Deposit;
			if(Deposit>0)
		{   BALANCE+=Deposit;
			transaction++;
			cout<<"Deposit Succesfull !!"<<endl;
			cout<<"Your Current Balance Is : "<<BALANCE<<endl;
			depocount++;}
			
			else
			{
				cout<<"Invalid Amount !"<<endl;
			}
			break;
		case 3 :
		    cout<<"Enter The Amount Of Money You Want To Withdraw : ";
		     
			cin>>Withdraw;
			if(Withdraw>0)
			{ 
			if(BALANCE>=Withdraw)
			{
		     BALANCE-=Withdraw;
		     transaction++;
			 cout<<"Withdraw Succesfull !!"<<endl;
			 cout<<"Your Current Balance :"<<BALANCE<<endl;
			 withcount++;} 
		    else
			{
				cout<<"Your Current Balance : "<<BALANCE<<endl;
				cout<<"Your Withdraw Amount : "<<Withdraw<<endl;
				cout<<" Insufficient Balance !!"<<endl;
			 } }
			else
			{
				cout<<"Invalid Amount !"<<endl;
			}
			  
			break;
		case 4 :
			cout<<"        Transaction History :        "<<endl;
			if(transaction>0)
			  {
			  	cout<<"+"<< Deposit<<" Deposited "<<endl;
			  	cout<<"-"<< Withdraw<<" Withdrwed "<<endl;
			  }
			else
			  {
			  	cout<<"No Transactions Yet "<<endl;
		      }
		    break;
		case 5 :
			cout<<"############## ATM Summary ##############"<<endl;
			cout<<"Initial Balance : "<< initialBALANCE<<endl;
			cout<<"Your Current Balance : "<<BALANCE<<endl;
			cout<<"Deposits : "<<depocount<<endl;
			cout<<"Withdrawals : "<<withcount<<endl;
		    cout<<"THANK YOU For Using Our ATM"<<endl;
			break;	
		default :
				cout<<"Invalid Option"<<endl;
				cout<<"Try Again"<<endl;
				break;
				
						
	}
}

while (Option!=5);
return 0;
}