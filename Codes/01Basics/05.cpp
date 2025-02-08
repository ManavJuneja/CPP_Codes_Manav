#include<iostream>
#include<string>

using namespace std;
int main(){
    // string favTea = "Lemon Tea\"best\" ";
    string favTea;
    int teaQuantity;
    cout << "What would you like to order in tea? \n";
    getline(cin, favTea);
    //ask for quantity
    cout<< "How many cups of " << favTea << "would you like to have ?";
    cin >> teaQuantity;
    cout << "Your fav tea is "<< favTea<< "and quatity is "<<teaQuantity<< endl;

    return 0;
}