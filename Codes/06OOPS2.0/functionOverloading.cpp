#include<iostream>

using namespace std;

class Area{
    public: 
    int calculateArea(int r){
        return 3.14*r*r;
    }
    int calculateArea(int lenght, int breadth){
        return lenght * breadth;
    }
};
int main(){
    
    return 0;
}