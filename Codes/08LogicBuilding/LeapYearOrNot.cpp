#include<iostream>

using namespace std;
bool isLeap(int n){
    return n % 400 == 0 || n % 4==0 && n % 100 != 0 ? 1 : 0;
}
int main(){
    int n;
    cin>>n;
    if(isLeap(n)){
        cout<<"Leap Year";
    }else{
        cout<<"Not leap year";
    }
}