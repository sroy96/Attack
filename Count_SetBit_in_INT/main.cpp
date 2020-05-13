#include <iostream>
using namespace std;

int count_number_of_setbits(int n){
    int countSetBits=0;
    while(n>0){
        n=n&(n-1); // and operation between 9 & 8==1 and 8&7===0 (stops here)
        countSetBits++;
    }
    return countSetBits;
}

int main() {
   cout << " count_number_of_setbits" << std::endl;
   cout<<count_number_of_setbits(10);
    return 0;
}
