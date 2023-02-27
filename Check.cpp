#include <iostream>
#include <ctime>
using namespace std;


class Factors{
    private:
    int check;
    double lastArrVal = 0;
    int dividend = 2;
    int resulting;
    int globalIndex = 0;
    int index = 0;
    int lastVal, checkLast;
    protected:
    int * newarr = new int[100];
    int newarrlen;
    public:
    Factors(double num){
        if(num<0){
            num = -num;
            cout<<"-"<<num<<" converted to "<<num<<" for easy computation."<<endl;
        }
        if(num<=2e+9){
            if(num==0 || num==1){
                newarr[index] = num;
            }
            else{
                check = this->prime(num);
                if(check == 1){
                newarr[globalIndex] = 1;
                globalIndex++;
                newarr[globalIndex] = num;
            }
                else{
                    manage(num);
                }
            }
        }
        else{
            cout<<"Input value too large!"<<endl;
            newarr[index] = 0;
        }
    }
    void manage(double num){
        lastVal = process(num);
        checkLast = this->prime(lastVal);
        // cout<<lastVal<<" . "<<checkLast<<endl;
        if(lastVal>1){
            while(checkLast==0){
                lastVal = process(lastVal);
                checkLast = this->prime(lastVal);
                // cout<<lastVal<<" . "<<checkLast<<endl;
            };
        }
    }
    int process(double num){
        int * specarr = new int[100];

        resulting = num;
        int res;

        while(resulting>1){
            specarr[0] = 1;
            res = divide(resulting, &dividend,specarr);
            resulting = res;
        }
        if(lastArrVal>1){
            index++;
            specarr[index] = lastArrVal;
        }


        for(int x = 0; x <= index; x++){
            newarr[x+globalIndex] = specarr[x];
        }
        globalIndex += index;
        index = 0;
        return lastArrVal;
    }
    int divide(double value, int * dividendPtr,int spec[]){
        double result,resultRem;
        int resultInt;
        int returnvalue = 0;
        result = value/ *dividendPtr;
        resultInt = result;
        resultRem = result-resultInt;
        if(resultRem>0){
        int store = *dividendPtr;
        store++;
        dividendPtr = &store;
        divide(value, dividendPtr,spec);
        }else if(resultRem==0){
            index++;
            spec[index] = *dividendPtr;
            lastArrVal = resultInt;
            returnvalue = resultInt;
        }
        return returnvalue;
    }

    void removeRep(){
        for(int x = 1; x<=globalIndex; x++){//Works only if 1 is not repeated from the second index upwards.
            if(newarr[x] == 1){
                for(int a = x; a<=globalIndex; a++){
                    newarr[a] = newarr[a+1];
                }
                globalIndex--;
            }
        }
    }

    void print(){
        for(int i = 0; i<=globalIndex; i++){
            cout<<" --"<<newarr[i]<<endl;
        }
        cout<<"..."<<globalIndex<<endl;
    }

    void printAsFactors(double number){
        this->removeRep();
        cout<<number<<": ";
        int sum = 0;
        if(globalIndex == 0){
            cout<<newarr[globalIndex]<<endl;
        }
        else{
            for(int i = 0; i<=globalIndex; i++){
                if(i==globalIndex){
                    cout<<newarr[i];
                }
                else{
                    cout<<newarr[i]<<"x";
                }
                sum+=newarr[i];
            }
            cout<<" -> "<<sum;
            sum = 0;
        }
    }


    int getArrLen(){
        this->removeRep();
        return globalIndex+1;
    }


    int prime(double number){
    int returnvalue = 0;
    for(double i = 2; i<=number; i++){
        double numvalue = number/i;
        int numV = numvalue;
        double numVrem = numvalue - numV;
        if(numVrem == 0){
            if(i == number){
                // cout<<"Is Prime";
                returnvalue = 1;
            }else{
                // cout<<"Is not Prime";
                returnvalue = 0;
            }
            break;
        }
    }
    return returnvalue;
    }
};



int main(){
    // double value;
    double prev, now, val;
    prev = time(0);
    for(double i = 41; i <= 1000; i++){
        Factors factors(i);
        factors.printAsFactors(i);
        cout<<" -- "<<factors.getArrLen()<<endl;
    }
    now = time(0);
    val = now-prev;
    if(val==1){
        cout<<"Loop took "<<val<<" second to run.";
    }
    else{
        cout<<"Loop took "<<val<<" seconds to run.";
    }
    return 0;
}