#ifndef ENGINE_H
#define ENGINE_H
#include "Car.hpp"
using namespace std;

class Engine{
    public:
    Engine(int maxcapacity,int currentCapacity,Car object);
    ~Engine();
    void engineStart();
    protected:
    private:
    int max;
    int curr;
    Car obj;
};

#endif