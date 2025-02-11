#include<iostream>
using namespace std;
int totalChaiServed(int chai[], int size){
    int total = 0;
    for(int i = 0; i < size; i++){
        total += chai[i];
    }
    return total;
}
int main(){
    int chaiServed[]= {50, 2, 30, 22, 34};  
    int total = totalChaiServed(chaiServed,5);
    cout<<total;
}