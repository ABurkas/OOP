#include <iostream>
#include <list>
using namespace std;

class Lamborghini{
public:
    string Name;
    string Owner;
    int maxSpeed;
    list<string> carParameters={"Break", "Comfort", "Capacity"};
};

int main(){
    Lamborghini lambo;
    lambo.Name = "Aventador";
    lambo.Owner = "Albert";
    lambo.maxSpeed = 320;

    cout<<"Lambo name: "<< lambo.Name<<endl;
    cout<<"Lambo owner: "<< lambo.Owner<<endl;
    cout<<"Lambo max speed: "<< lambo.maxSpeed<<endl;
    for (string parameter : lambo.carParameters){
        cout << parameter << endl;
    }
}