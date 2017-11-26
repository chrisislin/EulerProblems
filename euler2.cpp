//Goes until total is equal or greater than 4000000
//z is the sum of x and y
//so x moves on to y, like a fibanuocci sequence, y is not z cause fibanaccious
//total add z if the sum if an even number
#include <iostream>
using namespace std;

int main() {
    int x = 0;
    int y = 1;
    int z = 0;
    int total = 0;
    while ( (total) < 4000000 ) {
        z = (x + y);
        x = y;
        y = z;
        if (z % 2 == 0){
            total += z;
        }


    }
    cout<<total<<endl; //std::cout if no namespace std
    return 0;
}
