#include<iostream>
using std::cout;


int main(){
    
    int x = 24;
    cout << "x value is : " << x << "\n";
    cout << "x address is : " << &x << "\n";

    int* x_address = &x;
    cout << "x address is : " << x_address << "\n";
    cout << "x values is : " << *x_address << "\n"; //* is a dereferencing operator

    cout << "----------------------------------\n";

    *x_address = 25;
    cout << "x value is : " << x << "\n";
    cout << "x address is : " << &x << "\n";
    cout << "x address is : " << x_address << "\n";
    cout << "x values is : " << *x_address << "\n";

    return 0;
}