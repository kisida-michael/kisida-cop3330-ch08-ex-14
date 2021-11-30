#include "header.h"


// with const int you are unable to modify the values in function. 
// this allows you to pass constants that are not able to be modified and can be used in cases where your value will never change



void constInt(const int a, const int b){
    int temp;
    // b = a+b is not possible in this function
    temp = a+b;
     cout << "With const int: " << temp <<endl;
}

void noConstint(int a, int b){
    int temp;
    b = a+b; // is possible in this fucntion and changed the value of B
    temp = a+b;
    cout << "Without const int: " << temp <<endl;
}

int main() {
    int a,b;

    cout << "Input two numbers: " ;
    cin >> a >> b;

    constInt(a,b);
    noConstint(a,b);

} 
