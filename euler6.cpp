//loops to 100
//x is x+(i^2)
//y is y+i
//using cmath, pow y to the power of 2 to make a new y
//the +1 is needed for some reason
//y-x of the power of the sum of i - sum of i^2

#include <cstdio>
#include <iostream>
#include <cmath>

int main(){
int x = 0;
int y = 0;
for (int i = 1; i<= 100; i++){
    x += (i*i);
    y += i;
}
y = pow(y,2)+1;
std::cout<< y-x;

//std::cout<< y-x;
return 0;
}
