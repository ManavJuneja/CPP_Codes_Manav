#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Animal{
    public:
    virtual void speak(){//virtual help to decide at runtime
        cout<<"Hu HU !\n";
    }
    // virtual void speak() = 0//pure virtual function
    //can't create obj of this class//also knwo as abstract class
};
class Dog:public Animal{
    public:
    void speak(){
        cout<<"Bho Bho\n";
    }
};
class Cat: public Animal{
    public:
    void speak(){
        cout<<"Meow";
    }
};

int main(){
    // Animal *a;
    // a = new Dog();
    // a->speak();
    Animal *p;
    vector<Animal*>ani;
    ani.push_back(new Dog());
    ani.push_back(new Cat());
    ani.push_back(new Animal());
    ani.push_back(new Dog());
    ani.push_back(new Cat());

    for(int i = 0; i < ani.size(); i++){
        p = ani[i];
        p->speak();
    }

    return 0;
}