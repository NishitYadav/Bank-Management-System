#include<stdio.h>
#include<iostream>
#include<conio.h>

using namespace std;

class bank
{
    char name[100],add[100],y;
    int balance, amount;
public:
    void open_acc ();
    void with_mon ();
    void dis_acc();
    void dep_mon();
    
};
void bank::open_acc()
{
    system("cls");
    cout<<"Enter your full name ::";
    cin.ignore();
    cin.getline(name,100);
    cout<<"Enter your address ::";
    cin.ignore();
    cin.getline(add,100);
    cout<<"What type of account do you want to open saving (s) or current (c)?";
    cin>>y;
    cout<<"Enter amount for deposit ::";
    cin>>balance;
    cout<<"Your account is created ";

}
void bank::dep_mon()
{
    int a ;
    cout<<"Enter the amount you want to deposit::";
    cin>>a;
    balance+=a;
    cout<<"Your total deposit amount is\n";
}
void bank::dis_acc()
{
    cout<<"Enter the name ::"<<name<<endl;
    cout<<"Enterened your address ::"<<add<<endl;
    cout<<"Type of account that you want to open ::"<<y<<endl;
    cout<<"Amount you deposited ::"<<balance<<endl;

}
void bank::with_mon()
{
    cout<<"withdraw ::";
    cout<<"How much do you want to withdraw ";
    cin>>amount;
    balance=balance-amount;
    cout<<"Available Balance ::"<<balance;
}

int main()
{
    int ch,x,n;
    bank obj;
    system("cls");
    system("color 0A");
    do
    {
    cout<<"01)Open account \n";
    cout<<"02)Deposit  \n";
    cout<<"03)Withdrawal \n";
    cout<<"04)Display account details\n";
    cout<<"05)Exit\n";
    cout<<"Please select one of the options from above ";
    cin>>ch;

    switch(ch)
    {
        case 1:"01)Open account \n";
        obj.open_acc ();
        break;
        case 2:"02)Deposit \n";
        obj.dep_mon();
        break;
        case 3:"03)Withdrawal\n";
        obj.with_mon ();
        break;
        case 4:"04)Display account details\n";
        obj.dis_acc();
        break;
        case 5:
            if(ch==5)
            {
               cout<< "exit";
            }
        default:
            cout<<"Invalid Option ";

    }
    cout<<"\n If you would like to continue press::y\n";
    cout<<"If you want to exit the program press:: n ";
    x=getch();
    if(x=='n' || x=='N')
    cout<<"exit";
    }
    while (x=='y' || x=='Y');


 getch();
 return 0;




}
