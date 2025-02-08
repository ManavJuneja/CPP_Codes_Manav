#include<iostream>
using namespace std;
int main(){
    int noOfCups;
    double priceOfCup;
    double total, discountedPrice;
    cout<<"Enter total number of cups : ";
    cin>>noOfCups;
    cout<<"\nEnter price of per cup : ";
    cin>>priceOfCup;
    total = noOfCups * priceOfCup;
    cout<<"\nTotal Price : "<<total<<endl;
    // apply 5% discount if discount is above 100
    if(total > 100){
        discountedPrice = total - (total * 0.05);
         cout<<"After Discount : "<<discountedPrice<<endl;
    }else{
        cout<<"No Discount is Applicable so total : "<<total<<endl;
    }
    return 0;

}