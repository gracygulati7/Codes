//*!  banking problem
/* 
we are going to create a banking program 
to deposit money, withdraw money & to show balance.
*/

#include <iostream>
#include<iomanip>
using namespace std;

void showbalance(double balance){
    cout << "your balance is : " << fixed << setprecision(2) << balance << " Rs." << endl;
};
double deposit(){
    double amount=0;
    cout << "enter the amount to be deposited" << endl;
    cin >> amount;
    if(amount>0){
    return amount;
    }
    else{
        cout << "please enter a valid amount!"<<endl;
        return 0;
    }
};
double withdraw(double balance){
    double amount=0;
    cout << "enter the amount to be withdrawn" << endl;
    cin >> amount;
    if(amount>0 && amount <= balance){
    return amount;
    }
    else{
        cout << "invalid amount"<<endl;
        return 0;
    }
};

int main(){
    double balance=0;
    int choice=0;

        cout << "CHOICES" <<endl;
        cout << "***********************" << endl;
        cout<<"1. show balance"<<endl;
        cout<<"2. deposit money"<<endl;
        cout<<"3. withdraw moeny"<<endl;
        cout<<"4. exit"<<endl;
        cout << "***********************" << endl;
    do{
        cout <<"\nenter your choice" << endl;
        cin>>choice;
        cin.clear();               // to cut any errors from the input buffer.
        fflush(stdin);             // to cut any errors from the output stream.
        switch(choice){
            case 1:
                    showbalance(balance);
                    break;
            case 2:
                    balance+=deposit();
                    showbalance(balance);
                    break;
            case 3:
                    balance-=withdraw(balance);
                    showbalance(balance);
                    break;
            case 4:
                    cout << "thanks for visiting!"<<endl;
                    break;
            default:
                    cout << "please enter a valid choice" <<endl;
                    }
    }while(choice!=4);
    
    return 0;
}