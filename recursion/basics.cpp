#include <iostream>
/*
 1 1 2 3 5 8 13 21 34
 the next fib number is the sum of the previous two fib numbers
*/
int fib(int n){
  if (n <2){
    return 1;
  } else {
  return fib(n-1) + fib(n-2);
  }
}

int fibiter(int n){
    int zero = 0;
    int one = 1; // the first two numbers in the fibonacci sequence which we can use to reiterate

    for(int i = 1; i < n; i++){
        std::cout << zero << ", ";
        int fibonacci = zero + one; // placeholder to add both values
        zero = one; // replacing first value with second value
        one = fibonacci; // second value becomes placeholder and is then repeated n times
    }
    return 0;
}

int main(){

  int i;
    std::cout << "Fibonacci to 10 using Recursion: \n";
    for (i=0; i < 10 ; i++){
    std::cout << fib(i) << ", ";
    }

    std::cout << "\nFibonacci to 12 using a for loop:\n";
    fibiter(12);

  return 0;
}