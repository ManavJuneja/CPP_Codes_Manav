#include<iostream>

using namespace std;

class Cricketer{
    public:
    string name;
    int runs;
    float avg;
    Cricketer(){

    }
    Cricketer(string name, int runs, float avg){
        this->name = name;
        this->runs = runs;
        this->avg = avg;
    }
};
void change(Cricketer* c){
    
; 
    c->avg = 88;// also written like this     // (*c).avg = 77.2
};
 
int main(){
    Cricketer c1("Virat", 25000, 55.2);
    Cricketer c2("Rohit", 18000, 39.21);

    cout<<c2.avg<<endl;
    cout<<"Change Happened"<<endl;
    change(&c1);
    cout<<c1.avg;

    // Cricketer* p1 = &c1;
    // cout<<c1.runs<<endl;
    // cout<<(*p1).runs<<endl;
    // (*p1).avg = 77.99;//c1.avg = 77.99
    // cout<<(*p1).avg<<endl;
   
    return 0;

    //a->b mean (*a).b
}