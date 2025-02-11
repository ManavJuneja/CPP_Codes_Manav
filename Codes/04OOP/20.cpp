#include<iostream>
#include<vector>

using namespace std;
//class is blueprint of object
class Chai{ //default access is private in class and public in struct or union
    public:
    //Classes mein 2 chize hi hoti ha
    //data member and member functionalities

    //data members (attribute) (class ke var)
    string teaName; //name of the tea
    int serving; // number of servings
    vector<string> ingredients; //list of ingredients for the tea

    //member functions(functionalities of the class)
    void displayChaiDetails(){
        cout << "Tea Name : "<<teaName<<endl;
        cout << "Serving : "<< serving<<endl;
        for(string ingredient : ingredients){
            cout<< ingredient <<" ";
        }
        cout<<endl;
    }
};
int main(){
    Chai chai1; //Capital letter denotes class & lowercase denotes object
    chai1.teaName = "Masala Chai";
    chai1.serving = 2;
    chai1.ingredients = {"Milk", "Water", "Masala", "Leaves"};
    chai1.displayChaiDetails();
    Chai chai2;
    chai2.teaName = "Lemon Chai";
    chai2.serving = 1;
    chai2.ingredients = {"Lemon", "Water", "Honey"};
    chai2.displayChaiDetails();
    return 0;
}