#include <stdio.h>
#include "average.h"


int main() {
    double arr[] = {1.0, 2.0, 3.0, 4.0, 420}; //Added a fifth number '420'
    
    int arrlen = 0;
    arrlen = sizeof(arr)/sizeof(arr[0]); //added an integer that determines length of the array

    double result = average(arrlen, arr); //calculate average of hard-coded list in a less hard-coded way

    printf("The average of the hard coded list of numbers is: %.4f\n", result); //updated printed description to match what new code does
    return 0;    
}

