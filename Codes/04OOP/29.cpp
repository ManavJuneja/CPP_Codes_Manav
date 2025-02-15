#include<iostream>
#include<vector>

using namespace std;

class Chai{
    public:
        string teaName;
        int serving;
        vector<string> ingredients;

        //deligating constructor
        Chai(string name):Chai(name, 1, {"Water","tea leaves"}){}

        //main constructor
        Chai(string name, int serve, vector<string> ingr){
            teaName = name;
            serving = serve;
            ingredients = ingr;
            cout << "Main constructor called!"<<endl;
        }
        void displayChaiDetails(){
            cout << "Tea name "<<teaName<<endl;
            cout << "Servings "<< serving<<endl;
            cout << "Ingredients ";
            for(string a : ingredients){
                cout<<a<<" ";
            } 
        }



};

int main(){
    Chai quickChai("Quick Chai");
    quickChai.displayChaiDetails();

    return 0;
}
