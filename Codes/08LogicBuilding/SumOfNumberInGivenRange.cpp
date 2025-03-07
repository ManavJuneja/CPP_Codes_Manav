#include<iostream>

using namespace std;
int sum(int x, int y){
    int ans = y*(y+1)/2 - x*(x+1)/2 + x;
}
int main(){
    int start, end;
    cout<<"Enter start and end "<<endl;
    cin>> start >> end;
    int n = sum(start, end);
    cout<<n;
    return 0;
}