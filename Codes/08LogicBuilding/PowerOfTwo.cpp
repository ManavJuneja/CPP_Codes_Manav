#include<iostream>
using namespace std;
bool isPowerOfTwo(int n){
    return n < 1 ? false : ( n & (n -1))==0;
}
int main(){
    int n;
    cin>>n;
    if(isPowerOfTwo(n)){
        cout<<"Yes power of 2";
    }else{
        cout<<"Not power of 2";
    }
    return 0;
}