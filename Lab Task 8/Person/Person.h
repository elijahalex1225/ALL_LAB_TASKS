#ifndef PERSON_H
#define PERSON_H
#pragma once 
#include <string>
using namespace std;

class Person {
public:
      Person();

      Person(float newWeight);
      Person(string newName, float newWeight, int age);
      ~Person();

     //Overload the add operator 
    float operator + (const Person& otherPerson);

    bool operator==(const Person& otherPerson) ;
    bool operator!=(const Person& otherPerson);
    
    
    bool operator<(const Person& otherPerson) ;
    bool operator>(const Person& otherPerson) ;

    operator int ();
    operator string();
    operator float();



private:
    float mWeight;
    string mFirstName;
    int mAge;

};
#endif 
