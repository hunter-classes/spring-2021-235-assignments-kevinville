#include <iostream>

void hanoitower(char start, char end, char temp, int x){

    if(x == 1){ //when theres only 1 move to make there isn't anything that it has to do
        std::cout <<  start << " to " << end << "\n";
        return;
    }

    hanoitower(start, temp, end, x-1);
    std::cout << start << " to " << end << "\n";
    hanoitower(temp, end, start, x-1);

}


int main(){
    std::cout << "Test with 2:\n";
    hanoitower('a', 'c', 'b', 2);
    std::cout << "\nTest with 3\n";
    hanoitower('a', 'c', 'b', 3);
    std::cout << "\n";
    return 0;
}