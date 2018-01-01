//long long is basically a longer int since the number used is so big this time.
//I didn't even know it existed before now
//longest_factor is going to be used to find the biggest factor of the int
//x isn't one so it runs forever
//divides by two first, but it doesn't work so it loops again by 3
//x is now x / factor(f) which results in new x thanks to math
//largest factor is now the f that successfully did the division
//once it reaches 1, it ends and couts the largest_factor
//finds largest factor of 600851475143
#include <iostream>
using namespace std;

int main() {
    long long int x = 600851475143;

    int largest_factor = 0;
    for (int f = 2; x!=1; f++){
        while(x % f == 0){
        x = x / f;
        largest_factor = f;
        }
    }
    cout<<largest_factor<<endl;
    return 0;
}
