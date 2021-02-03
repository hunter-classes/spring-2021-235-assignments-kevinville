#include <iostream>

int davis(int n){

    if(n == 1){
        return 1; // only 1 possibility
    } 
    else if(n == 2){
        return 2; // two possibilities, aka 2 alone and 1+1
    }
    else if(n == 3){
        return 4; // four possibilities such as 1+1+1, 2+1, 3, 1+2
    }
    else{
            return davis(n-1) + davis(n-2) + davis(n-3); // formula to solve for davis working recursively
    }
}



int main(){
    std::cout << "hi\n Testing Davis with 1: ";
    std::cout << davis(1) << "\nTesting with 2: " << davis(2) << "\nTesting with 3: " << davis(3) << "\nTesting with 4: " << davis(4);
    std::cout << "\nTesting with 5: " << davis(5) << "\nTesting with 6: " << davis(6) << "\nTesting with 7 - (Should be 44 since given): " << davis(7) << "\n";
}



