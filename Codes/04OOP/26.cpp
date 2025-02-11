#include<iostream>
#include<vector>

using namespace std;

class Chai {
public:
    string* teaName;
    int servings;
    vector<string> ingrediants;
    //Copy constructor
    Chai(string name, int serve, vector<string> ingr){
        teaName = new string(name);
        servings = serve;
        ingrediants = ingr;
        cout<<"Param Constructure called"<<endl;
    }
    Chai(const Chai& other){
        teaName = new string(*other.teaName);
        servings = other.servings;
        ingrediants = other.ingrediants;
        cout<<"Copy Constructor called "<<endl;
    }

    ~Chai(){
        delete teaName;
        cout<<"Destructor Called"<<endl;
    }

    void displayChaiDetails(){
        cout<<"Tea Name : "<< *teaName <<endl;
        cout<<"Serving : "<<servings<<endl;
        for(string ing : ingrediants){
            cout<<ing<<" ";
        }
        cout<<endl<<endl;
    }
};
int main(){
    Chai lemonTea("Lemon Tea", 2 , {"Water", "Lemon", "Honey" });
    lemonTea.displayChaiDetails();
    //to copy the object of the other object so
    //use copy constructor
    //why need of copy constructor?
    Chai copiedChai = lemonTea;//so we can copy 
    copiedChai.displayChaiDetails();

    *lemonTea.teaName = "Modified Lemon Tea";
    cout<<"Lemon Tea"<<endl;
    lemonTea.displayChaiDetails();
    cout<<"Copied Tea"<<endl;
    copiedChai.displayChaiDetails();
    return 0;
}