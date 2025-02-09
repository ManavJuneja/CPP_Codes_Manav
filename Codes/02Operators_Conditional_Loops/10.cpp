#include<iostream>
#include<string>
using namespace std;
int main(){
    string tea;
    getline(cin,tea);
    if(tea == "Green Tea"){
        cout<<"Yes";
    }else{
        cout<<"No";
    }
    return 0;
}