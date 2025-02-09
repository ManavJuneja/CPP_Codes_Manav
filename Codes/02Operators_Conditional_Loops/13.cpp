#include<iostream>
#include<string>
using namespace std;
int main(){
    string gt = "Green Tea";
    string oT = "Oolong Tea";
    string bT = "Black Tea";
    int choice;
    double price;
    cout<<"Select your tea\n";
    cout<<"1. Green Tea\n";
    cout<<"2. Masala Tea\n";
    cout<<"3. Oolong Tea\n";
    cout<<"4. Black Tea\n";
    cout<<"Enter your Choice : ";
    cin>>choice;

    switch (choice)
    {
    case 1:
        price = 2.0;
        cout<<"You Selected Green Tea. Price : "<<price<<endl;
        break;
    case 2:
        price = 3.0;
        cout<<"You Selected Masala Tea. Price : "<<price<<endl;
        break;
    case 3:
        price = 4.0;
        cout<<"You Selected Oolong Tea. Price : "<<price<<endl;
        break;
        
    case 4:
        price = 5.0;
        cout<<"You Selected Black Tea. Price : "<<price<<endl;
        break;
        
    default:
        cout<<"Select Something";
        break;
    }
    return 0;
}