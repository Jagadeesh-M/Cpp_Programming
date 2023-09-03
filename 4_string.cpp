#include<iostream>
#include<string>
#include<cmath>

using namespace std;

int main(){
    string name = "Jagadeesh";
    // getline(cin, name);
    // cout << log(2) << "\n";
    // cout << name << "\n";
    // for(char c : name){
    //     cout << c;
    // }
    string* name_ptr = &name;

    cout << name << "\n";
    cout << *(&name) << "\n";
    cout << name_ptr << "\n";

    *name_ptr = "Madhusudhan Jagadeesh";

    cout << *name_ptr << "\n";
    cout << name << "\n";
    
    return 0;
}