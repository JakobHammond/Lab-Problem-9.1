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
        if(i < 9) cout << " ";
    }
    cout << endl;
    
    //prints every even element
    cout << "Even indices: ";
    for(int i = 0; i < 10; i = i + 2){
        cout << fourDigit[i];
        if(i < 8) cout << " ";
    }
    cout << endl;
    
    //prints every even value
    cout << "Even values: ";
    for(int i = 0; i < 10; i++){
        if(fourDigit[i] % 2 == 0){
            cout << fourDigit[i];
            if(i < 9) cout << " ";
        }
    }
    cout << endl;
    
    //elements in reverse order
    cout << "Reversed order: ";
    for(int i = 9; i >= 0; i--){
        cout << fourDigit[i];
        if(i > 0) cout << " ";
    }
    cout << endl;
    
    //first and last element
    cout << "First and last: " << fourDigit[0] << " " << fourDigit[9] << endl << "Press any key to continue . . ." << endl;
    
    
}
