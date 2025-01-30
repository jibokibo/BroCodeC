#include <stdio.h>

int main(){ // initial values: x=8, y=12, z=0
    int x = 19;    // 8 = 00001000
    int y = 12;   // 12 = 00001100
    int z = 0;    //  0 = 00000000


    // Bitwise OR |  (option + 7)
    z = x | y; // z = 12
    // Bitwise AND &
    z = x & y; // z = 8
    // Bitwise exclusive OR ^
    z = x ^ y; // z = 4
    // Bitwise Left Shift <<
    z = x << 1; // z= 16 , doubles the value
    // Bitwise Right Shift >>
    z = x >> 1; // z = 4 , halves the value
    // Bitwise not
    z = ~x; // z = -9 bei x = 19 --> z = -20
    printf("%d", z);

}