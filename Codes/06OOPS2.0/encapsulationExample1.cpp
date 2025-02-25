#include<iostream>

using namespace std;
//wraping up of data info in single unit(class)while controlling to them

//Trying to ente -ve ruppe in balance cause error

//direct access nhi hona chaie us var cum storage ka

//dalane se pehel check kar le so check point laga de

//so acces karege functio ki help se

class Customer{
    string name;
    int balance;
    int age;
    public:
        Customer(string a, int b, int c){
            name = a;
            balance = b;
            age = c;
        }
        void deposit(int amount){
            if(amount > 0){
                balance += amount;
            }else{
                cout<<"Invalid amount";
            }
        }
        void display(){
            cout<<"Name : "<<name<<"Balance : "<<balance<<"Age : "<<age<<endl;
        }
        void withdraw(int amount){
            if(amount <= balance){
                balance -= amount;
            }else{
                cout<<"Insufficiant balance";
            }
        }

};
int main(){
    Customer a1("Manav",99,19);
    a1.display();
    a1.deposit(99);
    a1.display();
    a1.withdraw(50);
    a1.display();

}
