#include<iostream>

using namespace std;

class Person{
    protected:
    string name;
    public:
    int age;
    void introduce(){
        cout<<"Hello my name is :"<<name<<endl;
    }
};

class Employee : public Person{
    protected:
    int salary;
    public:
    void monthlySalary(){
        cout<<"My monthly salary : "<<salary<<endl;
    }
};

class Manager : public Employee{
    public:
    string department;
    
    Manager(string name, int salary, string department){
        this->name = name;
        this->salary = salary;
        this->department = department;
    };
    void work(){
        cout<<"I am leading the department "<<department<<endl;
    }
};

int main(){
    Manager m1("Manv",20000, "CSE");
    m1.monthlySalary();
    m1.introduce();
return 0;
}