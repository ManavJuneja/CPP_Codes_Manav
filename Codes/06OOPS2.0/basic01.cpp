#include<iostream>
using namespace std;
class Student{
    public:
    string name;
    int rno;
    float gpa;
    void display(){
        cout<<name<<endl;;
        cout<<rno<<endl;
        cout<<gpa<<endl<<endl;
    }
    Student(){//default

    }
    Student(string s, int r, float g){//parametrizedjj
        name = s;
        rno = r;
        gpa = g;
    }
};
void print(Student s){
    cout<<s.name<<" "<<s.rno<<" "<<s.gpa<<endl;
}
int main(){
    Student s1("Manav",2101699, 8.38);
    s1.display();
    Student s2;
    s2.name = "Riya";
    s2.rno = 2101816;
    s2.gpa = 8.50;
    s2.display();
    Student s3 = s2;
    s3.name = "Ram";//Deep copy No change in actual
    s3.display();
    cout<<"\nS2 afterward"<<endl;;
    s2.display();
    Student s4(s1);//Deep copy No change in actual
    s4.name = "Seeta";
    s4.display();
    cout<<"\nS1 afterward"<<endl;
    s1.display();
    return 0;
}