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
            cout<<name<<endl<<runs<<endl;
        }

};
int main(){

    int *ptr = new int(4);//runtime mein memory allocate horahi ha
    int x = 8 ;//compilte time memory allocate ho rahi ha

    Cricketer c1("Virat",12);
    c1.display();
    
    cout<<*ptr<<endl;
}