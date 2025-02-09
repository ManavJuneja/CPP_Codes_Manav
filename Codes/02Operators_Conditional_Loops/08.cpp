#include<iostream>
using namespace std;
int main(){
    int teaCups;
    string badge;
    badge = "No Badge";
    cout << "Enter no. of cups you bought" <<endl;
    cin>> teaCups;
    if(teaCups > 20){
        badge = "Gold";
    }else{
        if(teaCups>=10 && teaCups <= 20){
            badge = "Silver";
        }
        
    }
    cout<<badge;
}