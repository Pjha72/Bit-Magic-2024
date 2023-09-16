/*
This is the second part of the Bitwise Operators in C++ which introduces us to the last 3 of the 6 bitwise operators in C++, namely:

1. Left Shift Operator (<<) : 
    It shifts the bits of the number to the left by the number of bits specified in the second operand. 
    It is equivalent to multiplying the number by 2^k ( if we are shifting k bits ).
    For example, 1<<2 = 4 and 1<<3 = 8.
    a. Remove and ignore leading y bits
    b. Move remaining 32-y bits to leftmost
    c. append y 0's at the end

2. Right Shift Operator (>>)
    It shifts the bits of the number to the right by the number of bits specified in the second operand. 
    It is equivalent to dividing the number by 2^k ( if we are shifting k bits ).
    For example, 4>>2 = 1 and 8>>3 = 1.
    a. Remove and ignore trailing y bits
    b. Move remaining 32-y bits to rightmost
    c. append y 0's at the beginning
3. Bitwise Not operator
    It is a unary operator and flips the bits of the number. 
    It is equivalent to subtracting the number from -1.
    For example, ~4 = -5 and ~8 = -9.
    a. Flip all the bits
    b. 1's become 0's and 0's become 1's
    c. 2's complement of the number
    d. size  = 2^32-1 = 4294967296-1 = 4294967295 (unsigned int)
    e. signed int size = -2^31 to 2^31-1 = -2147483648 to 2147483647
    f. 2's complement of x = 2^32 - x
*/