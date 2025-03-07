#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
bool isDuplicate(vector<int>& v){
    sort(v.begin(),v.end());
    for(int i = 1; i < v.size(); i++){
        if(v[i] == v[i - 1]){
            return true;
        }
    }
    return false;
}
int main(){
    int n;
    cout<<"Enter size of Vector";
    cin>>n;
    vector<int>v;
    int x;
    cout<<"Enter "<< n << "elements";
    for(int i = 0; i < n; i++){
        cin>>x;
        v.push_back(x);
    }
    if(isDuplicate(v)){
        cout<<"Yes have duplicate";
    }else{
        cout<<"No don't have duplicate";
    }
}