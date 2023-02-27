#include <iostream>
#include <string>
#include "Engine.hpp"
#include "Car.hpp"
#include "Person.hpp"
using namespace std;

Car::Car(string model){
    modelName = model;
    // cout<<"Class Car started"<<endl;
}

Car::~Car(){
    // cout<<"Class Car terminated"<<endl;
}

void Car::carStart(){
    cout<<"The "<<modelName<<" is on."<<endl;
}

Engine::Engine(int maxCapacity, int currentCapacity,Car object)
:max(maxCapacity), curr(currentCapacity), obj(object){
    // cout<<"Class Engine started"<<endl;
}

Engine::~Engine(){
    // cout<<"Class Engine terminated"<<endl;
}

void Engine::engineStart(){
    cout<<endl<<"Engine Start..."<<endl<<"Maximum Capacity: "<<max<<" L"<<endl<<"Current Capacity: "<<curr<<" L"<<endl;
    obj.carStart();
}


Person::Person(string name,string carmodelName,Engine ob)
    :n(name),mName(carmodelName),obs(ob){
        // cout<<"Class Person started"<<endl;
    }

Person::~Person(){
    // cout<<"Class Person terminated"<<endl;
}

void Person::turnKey(){
        cout<<n<<" just turned the "<<mName<<" on.";
        obs.engineStart();
    }

int main(){
    string carModel,personName;
    int max,cur;
    cin>>personName>>carModel>>max>>cur;
    Car obj(carModel);
    Engine obs(max,cur,obj);
    Person person(personName,carModel,obs);
    person.turnKey();
    return 0;
}