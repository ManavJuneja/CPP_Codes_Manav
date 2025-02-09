#include<iostream>
using namespace std;
int main(){
    bool isStudent;
    int cups;
    cout<<"Are you student (1 for Yes and 0 for No)";
    cin>>isStudent;
    cout<<"How many cups of tea you purchased";
    cin>>cups;
    if(isStudent || cups>15){
        cout<<"Eligible for a Discount";
    }else{
        cout<<"Not Eligible for a Discount";
    }
    return 0;
}