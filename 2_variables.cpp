#include<iostream>
using namespace std;

int main(){
    int myInt;
    double myDouble;
    char myChar;
    string myString;
    bool myBool;
    int x,y,z;
    const int minsPerHour = 60;

    myInt = 10.00;
    myDouble = 10.768;
    myChar = 77;
    myString = "Debora";
    myBool = true;
    x = y = z = 90;
    
    cout << myInt << "\n";
    cout << myDouble << "\n";
    cout << myChar << "\n";
    cout << myString << "\n";
    cout << myBool << "\n";
    cout << x + y + z << "\n";

    return 0;
}