#include "person.h"

Person ::Person(){
       mWeight  = 0.0f;
       mFirstName = "";
        mAge = 0;
}

Person ::Person(float newWeight){
    mWeight = newWeight;
    mFirstName = "";
    mAge = 0;
}
Person::Person(string newName, float newWeight,int age){
    mWeight = newWeight;
    mFirstName = newName;
    mAge  = age;
}

Person ::~Person(){

}

float Person::operator + (const Person& otherPerson){
    return this-> mWeight + otherPerson.mWeight;
}

bool Person::operator==(const Person& otherPerson)  {
    return this->mFirstName == otherPerson.mFirstName;
}

bool Person::operator!=(const Person& otherPerson) {
    return !(*this == otherPerson);
}

bool Person::operator<(const Person& otherPerson)  {
    return this->mAge < otherPerson.mAge;
}

bool Person::operator>(const Person& otherPerson)  {
    return this->mAge > otherPerson.mAge;
}

Person::operator int (){
    return mAge;
}

Person::operator string (){
    return mFirstName;
}

Person::operator float (){
    return mWeight;
}

