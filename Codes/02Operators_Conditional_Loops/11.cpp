#include<iostream>
#include<string>
using namespace std;
int main(){
    int time;
    cout<<"Enter the current hour(0 - 23)";
    cin>>time;
    if(time >= 8 && time <= 18 ){
        cout<<"Open";
    }else{
        cout<<"Close";
    }
    return 0;
}