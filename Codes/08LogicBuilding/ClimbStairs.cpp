#include<iostream>

using namespace std;
int climbStairs(int n){
    if(n == 1)return 1;
    if(n == 2)return 2;

    int prev2 = 1;
    int prev1 = 2;

    for(int i = 3; i < n; i++){
        int curr = prev2 + prev1;
        prev2 = prev1;
        prev1 = curr;
    }
    return prev1;
}
int main(){
    int n;
    cout<<"Enter value of N";
    cin>>n;
    int ans = climbStairs(n);
    cout<<ans;
    return 0;
}