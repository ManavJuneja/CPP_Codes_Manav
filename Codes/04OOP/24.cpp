#include<iostream>
#include<vector>

using namespace std;

class Chai {
public:
    string teaName;
    int servings;
    vector<string> ingrediants;
    //default constructor
    Chai(){
        teaName = "Unknown Tea";
        servings = 1;
        ingrediants = {"Water","Tea leaves"};
        cout<<"Constructure called";
    }
    void displayChaiDetails(){
        cout<<"Tea Name : "<< teaName <<endl;
        cout<<"Serving : "<<servings<<endl;
        for(string ing : ingrediants){
            cout<<ing<<" ";
        }
        cout<<endl;
    }
};
int main(){
    Chai defaultChai;
    defaultChai.displayChaiDetails();
    return 0;
}