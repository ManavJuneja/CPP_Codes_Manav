#include<iostream>
#include<vector>

using namespace std;

class Chai {
public:
    string teaName;
    int servings;
    vector<string> ingrediants;
    //parametrised constructor
    Chai(string name, int serve, vector<string> ingr){
        teaName = name;
        servings = serve;
        ingrediants = ingr;
        cout<<"Param Constructure called"<<endl;
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
    Chai lemonTea("Lemon Tea", 2 , {"Water", "Lemon", "Honey" });
    lemonTea.displayChaiDetails();
    return 0;
}