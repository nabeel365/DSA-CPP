#include <iostream>

using namespace std;

int main(){

// even or odd number

// int n;
// cout << "Enter a number : ";

// cin >> n; 
// if(n%2 == 0){
//     cout << "It is an even number";
// }else {
//     cout << "It is an odd number";
// }




// find sum of n integers...
// 
// int m;

// cout << "Enter a number";
// cin >> m;

// int sum = 0;

// for(int i = 0; i <= m; i++){
//     sum += i;
// }

// cout << sum;




// print odd numbers.....................................

// int n ;
// cout << "enter a number";
// cin >> n;

// for(int i =1; i<=n; i++){
//     if(i%2 != 0){
//         cout << i << " ";
//     }
// }

// .......................................................................

// int i;
// while (/* condition */  i<=n)
// {
//    /* code */

//     if(i%2 != 0){
//         cout << i << " ";
//     }

//      i++;    //increment oprator at the end
// }

// .......................................................................

// correct structure 

// int i = 1;
// while(i <= n) {
//     if(i % 2 != 0) {
//         cout << i << " ";
//     }
//     i++;
// }


// cout << endl;




// check whether a number is prime or not

// int n;
// cout << "Enter a number : \n";

// cin >> n;

// for(int i = 2; i <= n-1; i++){
//     if(n%i == 0){
//         cout <<  "Not a prime number.";
//     }else{
//         cout << "It is a prime number. ";
//     }
//     break;
// }



// another aproach

// int n = 14;
// bool isPrime = true;


// // i <= n -1  -->  i*i <= n;

// for(int i = 2; i*i <= n; i++){
//     if(n % i == 0){
//         isPrime = false;
//         break;
//     }
// }

// if(isPrime == true){
//     cout << "Prime";
// }else{
//     cout << "Non Prime";
// }



// nested loops---

// printf  "*" five times using loops


int n = 5;

for(int i = 1; i <=n; i++){

    int m = 7;
    for(int j =1; j <= m; j++){
        cout << j ;
    }

    cout << "\n";
}


    return 0;
}