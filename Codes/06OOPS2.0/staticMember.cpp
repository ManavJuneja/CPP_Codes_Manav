#include<iostream>

using namespace std;

class Customer{
    
    string name;//created when object is created
    int accountBalance;//created when object is created
    static int totalCustomer;//when class is created then this will created automatically

    //To acces static member if it is part of private 

    //NEED static memeber function

    public:
    Customer(string name, int accountBalance){
        this->name = name;
        this->accountBalance = accountBalance;
        totalCustomer++;
    }
    //Static Member Function
    //Can't acces other non static member
    //Belong to class only
    static void printTotalCustomer(){
        cout<<totalCustomer<<endl;
    }

    void display(){
        cout<<"Name : "<<name<<"Account Balance : "<<accountBalance<<"Total Customer : "<<totalCustomer<<endl;
    }
    
    void display_totalCustomer(){
        cout<<"Total customer : "<<totalCustomer;
    }
    
};
int Customer::totalCustomer = 0;//scope resolution operator
int main(){
    Customer A1("Manav",100);//Output Name : ManavAccount Balance : 100Total Customer : 2
                             //       Name : RiyaAccount Balance : 20000Total Customer : 2
    Customer A2("Riya",20000);
    A1.display();
    A2.display();

    // Customer::totalCustomer = 5;//can access without any object also and with object
    Customer::printTotalCustomer();
    A1.display_totalCustomer();//here display  Total customer : 5




    return 0;
}