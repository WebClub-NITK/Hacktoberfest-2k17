#include<iostream>
using namespace std;

int main() {
    int arr1[5] = {1, 0, 1, 0, 1};
    int arr2[5] = {0, 1, 0, 1, 0};
    
    //Bitwise and, or and xor
    int and[5], or[5], xor[5];
    for(int i = 0; i<5; ++i) {
        and[i]=arr1[i] & arr2[i];
        or[i]= arr1[i] | arr2[i];
        xor[i]=arr1[i] ^ arr2[i];
    }
    
    // Printing the new data
    for(int i = 0; i<5; ++i) {
        cout << and[i] << "\n" << or[i] << "\n" << xor[i];
    }
    
    return 0;
}
