// #include <iostream>
// using namespace std;
// main(){
//     cout << "This is my first c++ program";
//     return 0;
// }

#include<iostream>
using namespace std;
main(){
    int i,n;
    // for (int i = 5; i < 20; i++)
        // cout << i << endl;
    cout<< "Enter the number of which you want to find the multiplication of \n ";
    cin >> n;
    i = 1;
    while(i<=10){
        cout <<n<<" X "<<i<<"= "<<i*n <<endl;
        i++;
        }
    
    return 0;
} 