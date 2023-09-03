#include<iostream>
using namespace std;

int findOdd(int arr[], int n)
{
    int res = 0, i;
    for (i = 0; i < n; i++)
    {
        res ^= arr[i];
        cout << res << "\n";
    }

    return res;
}

int main(){
    int arr[] = { 1,1,2,2,3,4,4};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "The odd occurring element is  "<< findOdd(arr, n);
    
    return 0;
}