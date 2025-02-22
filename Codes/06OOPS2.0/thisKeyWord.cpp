#include<iostream>

using namespace std;

class Cricketer{
    public:
        string name;
        int runs;
    Cricketer(){

    }
    Cricketer(string name, int runs){
       this->name = name;
       this->runs = runs;
    }
    void display(){
        cout<<this->name<<endl<<this->runs<<endl;
    }
};
int main(){
    Cricketer c1("Virat Kohli",25000);
    Cricketer c2("Rohit Sharma",18000);
    c1.display();
    c2.display();
}