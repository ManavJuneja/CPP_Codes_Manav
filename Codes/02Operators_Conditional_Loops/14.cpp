#include<iostream>
using namespace std;
int main(){
    int noOfTeaCups;
    cout<<"Enter no. of tea cups";
    cin>>noOfTeaCups;
    while(noOfTeaCups > 0){
        cout<<noOfTeaCups<<endl;
        noOfTeaCups--;
    }
    return 0;
}