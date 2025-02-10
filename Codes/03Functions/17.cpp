#include<iostream>
using namespace std;
void print(int a, int b){ //parameter are inside function declaration
    cout<<a<<endl<<b;
}
void print(int a, int b, int c){
    cout<<a<<b<<c;
}
void print(string a = "Hi"){ //default function
    cout<<a;
}
int main(){
    int a, b;
    cout<<"Enter value of a and b";
    cin>>a>>b;
    print(a,b);//arguments are inside function calling
    print("Hello");
    return 0;
}