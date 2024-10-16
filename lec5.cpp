#include <iostream>

using namespace std;

// ........................
// fucntions
// ........................


// fucntion to print sum

double sum(double a, double b){  //parameters 
    double s = a + b;
    return s;
}


// find mimnimum



// calculate sum of numbers 1 to n

int calculateN(int n){
    int sum = 0;
    for(int i = 0; i<=n; i++){
        sum = sum + i;
    }
    return sum;
}


// calulate N factorial...


int factorialN(int n){
    int fact = 1;
    for(int i = 1; i <=n; i++){
        fact = fact * i;

    }

    return fact;
}


// pass by value

int sum(int a, int b){
    a = a + 10;  // 15
    b = b + 10;  // 14
    return a+b;  // 29
}



// main fucnction
int main(){


cout << "The sum is : " << sum(10.25, 8.23) << endl;  // arguments
    
cout << calculateN(5) << endl;

cout << factorialN(3) << endl;


int a = 5, b = 4;
cout << " sum on function call : " << sum(a, b) << endl;

cout << " original values" << a << endl;
cout << " original values" << b << endl;

    return 0;
}
