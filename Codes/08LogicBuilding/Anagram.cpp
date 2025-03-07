#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
bool isAnagram(string s, string t){
    if(s.length() != t.length()){
        return false;
    }
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());
    return s == t;
}
int main(){
    string s;
    string t;
    cout<<"Enter value of String S";
    getline(cin,s);
    cout<<"Enter value of String T";
    getline(cin,t);
    if(isAnagram(s,t)){
        cout<<"Yes";
    }else{
        cout<<"No";
    }
    return 0;
}