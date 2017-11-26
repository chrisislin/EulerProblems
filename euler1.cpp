//basically loops to 1000 and if the number can be divided
//perfectly by 3 or 5, total is the total of the numbers able to be divided by 3 or 5
#include <iostream>
int main() {
    int total = 0;
    for ( int i = 0; i < 1000; i++ ) {
        if ( i % 3 == 0 || i % 5 == 0 ) {

            total = total + i;
        }
    }
    std::cout<<( "\nTotal: %i\n", total );
    return 0;
}
