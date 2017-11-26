//this is recursion
#include <iostream>

bool calculate(int number, int n) {
    if (n == 0) {
        return true;
    }
    return (number % n != 0) ? false : calculate(number,n-1); //means if then false or calculate
}

int main() {
    int number = 20;
    int result = number;
    while (!calculate(result, number)) { //while not 0
        result += number;
    }
    std::cout << result << '\n';
}
