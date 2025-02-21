#include<iostream>

using namespace std;

class BankAccount {
    private:
        string accountNumber;
        double balance;

    public:
        BankAccount(string accNum, double bal){
            accountNumber = accNum;
            balance = bal;
        }
    //getter
    double getBalance() const{
        return balance;
    }

    //setter
    void setBalance(double amount){
        if(amount > 0){
            balance+=amount;
            cout<<"\nDeposited : "<<amount<<endl;
        }else{
            cout<<"\nInvalid Deposit ";
        }
    }
    //withdraw
    void withdraw(double amount){
        if(amount > balance){
            cout<<"\nInsufficiant Balance ";
        }else{
            balance -= amount;
            cout<<"\nRemaing Balance : "<<balance<<endl;
            cout<<"\nAmount Withdrawn : "<<amount<<endl;
        }
    }
};
int main(){
    BankAccount acc1("123",200);
    cout<<acc1.getBalance();
    acc1.setBalance(300.0);
    cout<<acc1.getBalance();
    return 0;
}