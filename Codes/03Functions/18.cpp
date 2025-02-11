#include<iostream>
using namespace std;
void swap(int &a, int &b){//remove & for call by value
    int temp = a;
    a = b; 
    b = temp;
}
int main(){
    int a, b;
    a = 10, b = 20;
    cout<<"Before a : "<<a<<" b : "<<b;
    swap(a,b);
    cout<<"\nAfter a : "<<a<<" b : "<<b;
}