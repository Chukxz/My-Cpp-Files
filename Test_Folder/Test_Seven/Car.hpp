#ifndef CAR_H
#define CAR_H
#include <string>

using namespace std;

class Car{
    public:
    Car(string model);
    ~Car();
    void carStart();
    private:
    string modelName;
    protected:
};

#endif //CAR_H