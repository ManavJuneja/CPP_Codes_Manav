#include<iostream>
using namespace std;
int helloChai(){

}
int main(){
    //lambda : for special use only at point of time
    auto preparedChai =  [](int cups){
        cout<<"Preparing "<<cups<<" cups"<<endl;
    };
    preparedChai(4);
}