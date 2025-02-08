#include<iostream>
using namespace std;
int main(){
    int teaBags;
    cout<<"Enter number of tea bags : ";
    cin>>teaBags;
    if(teaBags < 10){
        teaBags += 5;
    }
    cout<<"Updated Tea bags : "<<teaBags;
    return 0;
}