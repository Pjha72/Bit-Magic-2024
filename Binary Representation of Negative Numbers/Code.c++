/*
1. Negative numbers are repersented in 2's compliment form.
2. Range of numbers : [-2^n-1 to 2^n-1 - 1] Here n is number of bits.
3. Steps to get 2's compliment of a number :
    a. Flip all the bits
    b. Add 1 to the result
4. Example : -5
    a. 5 = 00000000 00000000 00000000 00000101
    b. Flip all the bits : 11111111 11111111 11111111 11111010
    c. Add 1 to the result : 11111111 11111111 11111111 11111011
    d. -5 = 11111111 11111111 11111111 11111011
5.  Direct formula : 2^n-x
    a. 2^32 = 4294967296
    b. 4294967296 - 5 = 4294967291
    c. 4294967291 = 11111111 11111111 11111111 11111011
6. Why 2's compliment Form ?
    1. We have only one representation of zero
    2. The arithematic operations are easier to perform. Actually 2's compliment form is derived from the idea of 0-x
    3. The leading bit is always 1.
*/