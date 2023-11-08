//
//  main.cpp
//  week7lesson1
//
//  Created by Dmitriy Taldonov on 08/11/23.
//
//Challange 1

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

void swap (int*a, int*b){
    *a = *a + *b;
    *b = *a - *b;
    *b = *a - *b;
    
   
}

void minimal(int *arr, int size, int *min, int *max) {
    *min = arr[0];
    *max = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] < *min) {
            *min = arr[i];
        } else if (arr[i] > *max) {
            *max = arr[i];
        }
    }
}



int main(){
    
  
    int arr[] = {10, 5, 20, 15, 3};
        int size = 5;
        int min, max;
    minimal(arr, size, &min, &max);

    cout << min << " \n "<< max << endl;
//    int numberOne = 2;
//    int numberTwo = 3; minimal(arr, size, &min, &max);

//    swap (numberOne, numberTwo);
//    cout << numberOne<< " " << numberTwo << endl;
     
    return 0;
}
