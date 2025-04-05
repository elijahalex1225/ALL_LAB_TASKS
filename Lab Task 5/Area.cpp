#include <iostream>
using namespace std ;

void display();
void Square();
void Rectangle();
void Triangle();

int main (){
    int choice ;
    do {
        
    display ();
  
    cout << "ENTER SELECTION  :"<<endl;
    cin >> choice;

    switch (choice){

        case 1 : Square(); break;
        case 2 : Rectangle();break;
        case 3 : Triangle();break;
        case 4 : cout <<"Exiting Program...................thank you"<<endl;break;
        default: cout << "Invalid selection! Try again." << endl;
    }

        cout <<endl;
       } while (choice !=4);
        return 0;
}

void display() {
    cout <<"***********Please Selecyt The area of the shape to calculate**********"<<endl;
    cout << "1.SQUARE"<<endl;
    cout << "2.RECTANGLE"<<endl;
    cout << "3.TRIANGLE"<<endl;
    cout << "4. QUIT PROGRAM" <<endl;
}
void Square() {
    double x,y;
    cout << "Enter side value in cm :"<<endl;
    cin >> x;
    y = x * x;
   cout << "Area of Square is :"<< y<< endl;
    
}

void Rectangle() {
    double x,y,z;
    cout << "Enter length value in cm :"<<endl;
    cin >> x;
    cout << "Enter width value in cm :"<<endl;
    cin >> y;
    z = x*y;
   cout << "Area of Rectangle is :"<< z<< endl;
}

void Triangle() {
    double x,y,z;
    cout << "Enter base value in cm :"<<endl;
    cin >> x;
    cout << "Enter height value in cm :"<<endl;
    cin >> y;
    z = 1/2 *(x*y);
    cout << "Area of Rectangle is :"<< z<< endl;
}




 

    