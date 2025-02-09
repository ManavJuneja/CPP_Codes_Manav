#include<iostream>
using namespace std;

int main(){
    int cupsOfTea;
    cout<<"Enter no. of cups";
    cin>>cupsOfTea;
    double pricePerCups = 10.00, totalPrice, discount;
    totalPrice = cupsOfTea * pricePerCups;
    if(cupsOfTea > 20){
        discount = 0.20;
    }else if(cupsOfTea >= 10 && cupsOfTea <= 20){
        discount = 0.10;
    }else{
        discount = 0.0;
    }
    totalPrice = totalPrice - (totalPrice * discount);
    cout<<"After Discount Price : "<< totalPrice;
    return 0;
}