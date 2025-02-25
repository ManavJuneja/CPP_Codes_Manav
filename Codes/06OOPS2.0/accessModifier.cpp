#include<iostream>

using namespace std;

class Student{
    private:
        string name;
        float marks;
    public:
        int rollNo;

    Student(){}
    Student(int rollNo, string name, float marks){
        this->rollNo = rollNo;
        this->name = name;
        this->marks = marks;
    }
    void print(){
        cout<<rollNo<<" "<<name<<" "<<marks<<endl;;
    }
    int getRollNo(){
        return rollNo;
    }
    void setRollNo(int rn){
        rollNo = rn;
    }
    string getName(){
        return name;
    }
    void setName(string nm){
        name = nm;
    }
    float getMarks(){
        return marks;
    }
    void setMarks(float mk){
        marks = mk;
    }

    
    
};

int main(){
    Student s1(2101699,"Manav",8.38);
    cout<<s1.getMarks();
    cout<<endl;
    s1.setMarks(9.00);
    cout<<endl;
    s1.print();
    return 0;
}