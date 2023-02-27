#ifndef FCT_HPP
#define FCT_HPP
#include <iostream>
using namespace std;

template <class B, class U>
class Pairs{
    private:
    B firsts;
    U seconds;
    public:
    Pairs(B a, U b)
    :firsts(a), seconds(b)
    {
        cout<<endl<<a+b<<endl;
    }
    U summations();
};

#endif //FCT_HPP