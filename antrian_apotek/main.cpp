#include "iostream.h"
#include "list"
#include "string.h"
using namespace std;

class bank_account {
public:
    double acc_number;
    static double counter;
    char acc_owners[20];
    double acc_balance;
    list <double> transaction;
    bank_account(char *name, double balance)
    {
        counter++;
        acc_number = counter;
        strcpy(acc_owners, name);
        acc_balance = balance;
        cout<<"account No."<<acc_number<<" created."<<endl;
    }
    void add_money(double m)
    {
        acc_balance = acc_balance + m;
        transaction.push_back(m);
        cout<<"adding money successful"<<endl<<endl;
    }
    void withdraw(double n)
    {
        if (acc_balance > (n+10))
        {    acc_balance = (acc_balance - n) - 10;
            transaction.push_back(-n);
            transaction.push_back(-10.0);
            cout<<"withdrawal successful"<<endl<<endl;
        }
        else cout<<"balance is not enough"<<endl<<endl;
    }
    void see_money()
    {
        cout<<"Your money is "<<acc_balance<<endl<<endl;
    }
    void charges()
    {
        list<double>::iterator p;    //pointer u/ mengakses isi container class
        cout<<"List of transaction and charges:"<<endl;
        for (p=transaction.begin(); p!=transaction.end(); p++)
        {
            if (*p == -10.0)
                cout<<"Charges: "<< *p <<endl;
            else if (*p < 0)
                cout<<"Withdrawal: "<< *p <<endl;
            else cout<<"Adding: "<< *p <<endl;
        }
        cout<<"Balance is "<<acc_balance<<endl<<endl;
    }
};
class cheque: public bank_account {
public:
    cheque(char *n, double b): bank_account(n, b)
    {
        cout<<n<<"'s cheque ($"<<b<<") created."<<endl;
    }
};
class saving: public bank_account {
private:
    double interest_rate;
public:
    saving(char *n, double b): bank_account(n, b)
    {
        interest_rate = 0.01;
        cout<<n<<"'s saving ($"<<b<<") created."<<endl;
    }
    void add_interest()
    {
        if (acc_balance > 10)
        {
            acc_balance = acc_balance + (interest_rate*acc_balance);
            cout<<"interest is already added"<<endl<<endl;
            transaction.push_back(interest_rate*acc_balance);
        }
        else cout <<"the balance is less than 10"<<endl<<endl;
    }
};

double bank_account::counter;

void main()
{/*
    saving mysaving("Yusuf",100); //contoh data uji coba
    mysaving.add_money(30);
    mysaving.add_interest();
    mysaving.withdraw(75);
    mysaving.charges();

    cheque mycheque("Rahma", 150);
    mycheque.add_money(20);
    mycheque.withdraw(40);
    mycheque.charges();
    */
    int choice=0;
    int acc_type;
    while(choice != 5)
    {
        cout<<endl<<"Bank Account System"<<endl;
        cout<<"MENU:"<<endl;
        cout<<"1. Create New Account"<<endl;
        cout<<"2. Add Money"<<endl;
        cout<<"3. Withdrawal"<<endl;
        cout<<"4. Transaction List"<<endl;
        cout<<"5. Exit"<<endl;
        cout<<"What is your choice:";
        cin>>choice;
        switch(choice) {
        case 1:
            cout<<"What kind of account?"<<endl;
            cout<<"1. Cheque"<<endl;
            cout<<"2. Saving"<<endl;
            cout<<"Account Type: ";
            cin>>acc_type;
            if (acc_type == 1)
                cheque mine("Name Cheque",100);
            else if (acc_type == 2)
                saving mine("Name Saving",150);
            else cout<<"Unknown type. Please retry."<<endl;
            break;
        case 2:    //call method for adding money
            cout<<"Add some money..."<<endl; break;
        case 3: //call method for withdraw money
            cout<<"Withdrawal some money..."<<endl; break;
        case 4://call method for showing all transaction
            break;
        case 5: cout<<"Exit program..."<<endl;
        default: cout<<"Unknown input. Please retry"<<endl;
        }
    }
}
