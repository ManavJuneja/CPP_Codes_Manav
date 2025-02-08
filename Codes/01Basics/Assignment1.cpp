#include<iostream>
#include<string>
using namespace std;
int main(){
    string typeOfTea;
    float price;
    char rating;
    cout<<"Enter the type of tea : ";
    getline(cin,typeOfTea);
    cout<<"Enter the price of tea(per KG) : ";
    cin >> price;
    cout<<"Enter the rating from A - D : ";
    cin >> rating;
    cout<<"Type of Tea : "<<typeOfTea<<"\n"<<"Price : "<<price<<"\n"<<"Rating : "<<rating<<endl;
    int roundedPrice = (int)price*1.1;
    cout<<roundedPrice<<endl;
    return 0;
}