#include<iostream>
#include<string>

using std::cout;

int addbyval(int,int);
void printsum(int);
void addbyref(int& x, int& y,int& sum);
int arraysum(int arry[5]);

int addbyval(int x, int y){
    x++;
    y++;
    return x + y;
}

std::string addbyval(std::string x, std::string y){
    return x + " " + y;
}

void printsum(int x){
    cout << "sum is : " << x << "\n";
}

void addbyref(int& x, int& y,int& sum){
    x++;
    y++;
    sum = x + y;
}

int arraysum(int arry[5]){
    int s = 0;
    for(int i = 0; i < 5 ; i++)
        s += arry[i];

    return s;
}

int main(){
    int x = 10,y = 20;
    int sum1 = addbyval(x,y);
    printsum(sum1);
    cout << "value of x is : " << x << "\n";
    cout << "value of y is : " << y << "\n";
    cout << "---------------------------------\n";
    int sum2 = 0;
    addbyref(x, y, sum2);
    cout << "sum is : " << sum2 << "\n";
    cout << "value of x is : " << x << "\n";
    cout << "value of y is : " << y << "\n";
    cout << "---------------------------------\n";
    int ar[5] = {1,2,3,4,5};
    int sum3 = arraysum(ar);
    printsum(sum3);
    cout << "---------------------------------\n";
    std::string opstring = addbyval("Hello", "World");
    cout << opstring << "\n";
}