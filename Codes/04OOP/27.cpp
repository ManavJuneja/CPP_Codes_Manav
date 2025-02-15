#include<iostream>
using namespace std;
class Chai{
    private:
        string teaName;
        int servings;
    public:
        Chai(string name, int serve):teaName(name),servings(serve){}

        friend bool compareServings(const Chai &chai1,const Chai &chai2);

        void display() const{
            cout<< "Tea name : " << teaName <<endl;
        }
};
bool compareServings(const Chai &chai1, const Chai &chai2){
    return chai1.servings > chai2.servings;
}
int main(){
    Chai masalaTea("Masala Chai", 4);
    Chai gingerTea("Ginger Tea", 8);

    gingerTea.display();
    masalaTea.display();

    if(compareServings(masalaTea, gingerTea)){
        cout<<"Masala Chai is More";
    }else{
        cout<<"Masala Chai is Less";
    }

}