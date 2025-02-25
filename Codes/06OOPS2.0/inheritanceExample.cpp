#include<iostream>

using namespace std;

class Scooty{
    public:
        int speed;
        float mileage;
};
class Bike : public Scooty{
    public:
        int noOfGears;
};
int main(){
    Bike b1;
    b1.speed = 180;
    cout<<b1.speed<<endl;

}