#include<iostream>
#include<vector>

using namespace std;

class Chai{
    private:
        string teaName;
        int serving;
        vector<string> ingredients;
    public:
        Chai(){
            teaName  = "Unknown Tea";
            serving = 1;
            ingredients = {"Water", "tea leaves"};
        }
        Chai(string name, int serve, vector<string> ingre ){
            teaName = name;
            serving = serve;
            ingredients = ingre;
        }
        //getter
        string getTeaName(){
            return teaName;
        }
        //setter
        void setTeaName(string name){
            teaName = name;
        }
        //getter
        int getServings(){
            return serving;
        }
        //setter
        void setServing(int serve){
            serving = serve;
        }
        //getter for ingr
        vector<string> getIngredients(){
            return ingredients;
        }
        //setter for ingr
        void setIngredients(vector<string> ingr){
            ingredients = ingr;
        }
        //display all
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
    Chai chai;
    chai.setTeaName("Oolong Tea");
    cout<<chai.getTeaName();
   
    
}