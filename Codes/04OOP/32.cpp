#include<iostream>
#include<string>
#include<vector>

using namespace std;

class Tea{
    protected:
        string teaName;
        int serving;
    public:
        Tea(string name, int serve): teaName(name), serving(serve){
            cout<<"Tea constructor called "<< teaName<<endl;
        }
        virtual void brew() const{
            cout<<"Brewing "<<teaName<< "with generic method" <<endl;;
        }
        virtual void serve() const{
            cout<<"Serving "<<serving<< "cups of tea with generic method" <<endl;;
        }
        virtual ~Tea(){
            cout<<"Tea destructor called for "<<teaName<<endl;
        }
};
class GreenTea: public Tea{
    public:
        GreenTea(int serve): Tea("Green Tea", serve){
            cout<<"Green Tea constructor called"<<endl;
    }
    void brew()const override{
        cout<<"Brewing "<<teaName<< "by steeing green tea leaves"<<endl;
    }
};
