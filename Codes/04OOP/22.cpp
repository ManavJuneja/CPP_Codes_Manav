#include<iostream>

using namespace std;

int *prepareChaiOrders(int cups){
    int *orders = new int [cups];//new keyword use to do memory allocation in heap
    //Why heap?
    //Because when function call ends the memory allocated in 
    //stack got removed whereas in heap this don't happen
    // we need to free the heap memory manualy using delete keyword
    for(int i = 0; i < cups; i++){
        orders[i] = (i + 1) * 10;
    }
    return orders;
}
int main(){
     int cups = 5;
     int *chaiOrder = prepareChaiOrders(cups);
     for(int i = 0; i < cups; i++){
        cout<<"Cups : "<<i + 1 << " has "<<chaiOrder[i]<<endl;
     }
     delete[] chaiOrder;
     return 0;
}