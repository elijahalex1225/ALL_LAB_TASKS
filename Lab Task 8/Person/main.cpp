#include "Person.h"
#include <iostream>
using namespace std;


int main (){

    Person Jane = Person("Jane", 60.0f, 24);
    Person John= Person("John", 75.0f,30);

    if (Jane == John){
        cout << "This is the same person"<<endl;
    }
    if (Jane != John){
        cout << "This is NOT the same person"<<endl;
    }

    if (Jane < John){
        cout << "Jane is younger than John"<<endl;
    }
    if (John> Jane){
        cout << "John is older than Jane "<<endl;
    }
    
    float totalWeight  = Jane + John;
    cout << "Total Weight : " <<totalWeight<<endl;

    int johnAge = John;
    cout << "John's Age : "<< johnAge<<endl;

    string janeFirstName = Jane;
    cout << "Jane's FirstName : "<<janeFirstName<<endl;

    float janeWeight = Jane;
    cout << "Jane's Weight: "<<janeWeight<<endl;

    return 0;
}