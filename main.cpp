//
//  main.cpp
//  p9-1
//
//  Created by Jakob Hammond on 10/26/23.
//

#include <iostream>
using namespace std;

int main(void){
    srand(time(NULL));
    
    int fourDigit[10];
    
    //fills the array and prints every element in order
    cout << "The random integers: ";
    for(int i = 0; i < 10; i++){
        fourDigit[i] = rand() % 9000 + 1000;
        cout << fourDigit[i];
        if(i < 9) cout << ", ";
    }
    cout << endl;
}
