// patterns

#include <iostream>

using namespace std;

int main(){

// print cahrcters from A to Z five times...
// int n = 5;

// for(int i = 1; i <= n; i++){

//     char ch = 'A';
//     for(int j = 1; j <= 26; j++){
//         cout << ch << " ";
//         ch = ch+1;
//     }

//     cout << endl;



// pattern --

// 1 2 3
// 4 5 6
// 7 8 9


// int n = 5;
    
// int b = 1;

// for(int i = 1; i <= n; i++){


//     for(int j = 1; j <= 3; j++){
//         cout << "/";
//         b++;
//     }

//     cout << endl;


// }


// star pattern

// * 
// * *
// * * * 
// * * * *

// int n = 5;

// for(int i =0; i < n; i++){
//     int h = i+1;
//     for(int j =0; j<h; j++){
//         cout << "*";
//     }
//     cout << endl;
// }


////////

// for(int i =0; i < n; i++){
  
//     for(int j =0; j<i+1; j++){
//         cout << "*";
//     }
//     cout << endl;
// }


// 
// 1
// 2 2
// 3 3 3
// 4 4 4 4

// int n = 5;

// for(int i =1; i < n; i++){
  
//     for(int j =1; j<i+1; j++){
//         cout << i;
//     }
//     cout << endl;
// }



// 
// A 
// B B 
// C C C 
// D D D D

// int n = 5;

// for(char i = 97; i < n; i++){
  
//     for(int j =1; j<i+1; j++){
//         cout << i;
//     }
//     cout << endl;
// }


// RE ATTEMPT ^^^^^^^





// 
// 1 
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5


// int n = 5;

// for(int i =0; i < n; i++){
  
//     for(int j =1; j<=i+1; j++){
//        cout << j;
//     }

//     cout << endl;
// }




// 1 
// 2 1
// 3 2 1
// 4 3 2 1


// int n = 5;

// for(int i = 0; i < n-1; i++){
  
//     for(int j =i+1; j>0; j--){
//        cout << j << " ";
//     }

//     cout << endl;
// }



// floyd's triangle pattern

// 1 
// 2 3
// 4 5 6
// 7 8 9 10


// int n = 5;

// int num = 1;
// for(int i =1; i < n; i++){
  
//     for(int j =1; j<=i; j++){
//        cout << num << " ";
//        num++;
//     }

//     cout << endl;
// }

// 
// A 
// B C
// D E F
// G H I J


// int n = 5;

// char num = 65;  //65 -A   // 97-a
// for(int i =1; i < n; i++){
  
//     for(int j =1; j<=i; j++){
//        cout << num << " ";
//        num++;
//     }

//     cout << endl;
// }


// 
// A 
// A B 
// A B C 
// A B C D

// int n = 5;

// for(int i =1; i < n; i++){

// char num = 65;  //65 -A   // 97-a
// // number updated just b4 the execution of thge 2nd loop...
  
//     for(char j =1; j<=i; j++){
//        cout << num << " ";
//        num++;
//     }

//     cout << endl;
// }



// 
// 1 1 1 1
//   2 2 2 
//     3 3 
//       4

// ...........................................
// int n = 5;

// for(int i =1; i < n; i++){
//   cout << " ";
//     for(int j =0; j<n-i; j++){
        
//         // cout << " ";
//         cout << i; 

        
//     }
        

//     cout << endl;
// }

// ...........................................
// correct the mistake.



// correct ---------------------------

int n = 7;
for(int i = 0; i < n; i++){

// space
for(int j = 0; j < i; j++){
    cout << " ";
}

// numbers
for(int j = 0; j < n-i; j++){
    cout << (i+1);
}

cout << endl;

}


















    return 0;
}