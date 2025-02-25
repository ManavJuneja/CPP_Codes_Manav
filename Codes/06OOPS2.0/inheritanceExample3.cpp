#include<iostream>

using namespace std;

class Human{
    protected:
    string name;
    int age;

    public:
    ~Human(){cout<<"Human\n";}
    void work(){
        cout<<"I am working\n";
    }
};
class Student: public Human{
    int rollNo, fees;

    public:
    ~Student(){cout<<"Student\n";}
    
};
int main(){
    Student A1;
    return 0;
}