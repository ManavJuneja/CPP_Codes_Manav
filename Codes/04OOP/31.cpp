#include<iostream>
#include<string>

using namespace std;
//Abstract Class if ik virtual func ho to abstr class
//No making of Objects also
class Tea{
    public:
      virtual void prepareIngredients() = 0;//pure virtual func
      virtual void brew() = 0;
      virtual void serve() = 0;
      
      void makeTea(){
        prepareIngredients();
        brew();
        serve();
      }
};

class GreenTea : public Tea{
    public:
        void prepareIngredients() override {
            cout<<"Green and water"<<endl;
        }
        void brew() override {
            cout<<"Tea Brewed"<<endl;
        }
        void serve() override {
            cout<<"Tea Served"<<endl;
        }
};

class MasalaTea : public Tea{
    public:
        void prepareIngredients() override {
            cout<<"Masala and water"<<endl;
        }
        void brew() override {
            cout<<"Tea Brewed"<<endl;
        }
        void serve() override {
            cout<<"Tea Served"<<endl;
        }
};
int main(){
    GreenTea gt;
    MasalaTea mt;
    gt.makeTea();
    mt.makeTea();

    return 0;
}