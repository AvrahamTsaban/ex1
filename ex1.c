/******************
Name:Avraham Tsaban
ID: 207088733
Assignment: 1
*******************/
#include <stdio.h>

// REMIDER : YOU CANT USE ANY CONTROL FLOW OPERATIONS OR FUNCTIONS, ONLY BITWISE. not even "==, &&, ||, !="

int main()
{

    // Ascii
    printf("Ascii:\n");
    /*. Scan one character from the user.
        Then, refer to it as an integer.
        a. Print its value.
        b:
        Print “0”, if its integer representation is even.
        print “1” if its integer representation is odd. */
    printf("Please enter a character\n");
    char inputCharacter = getchar();
    printf("Its numerical value is: %d\n", inputCharacter);
    printf("0 for even, 1 for odd: %d\n", inputCharacter&1);

    // 2's complement and other representations
    printf("\n2's complement to other representations:\n");
    /*. Scan a negative integer. [2’s complement].
        Print its value in 1’s complement.
        Print its value as unsigned. */
    int negativeNumber;
    printf("Please enter a negative integer\n");
    scanf("%d", &negativeNumber);
    printf("1's complement: %d\n", -(~negativeNumber));
    printf("unsigned: %u\n", negativeNumber);


    // Shifting right and left
    printf("\nShifting right and left:\n");
    /*. Scan 3 integers.
        The first one - the value you will play with.
        The second and the third - how much to shift right and left, respectively.
        Print the value after shifting right and then shifting left. */
    printf("Please enter 3 integers\n");
    int input, toRight, toLeft;
    scanf("%d %d %d", &input, &toRight, &toLeft);
    input = input>>toRight;
    input = input<<toLeft;
    printf("After shifting right and left: %d\n", input);

    // Even - Odd
    printf("\nEven - Odd:\n");
    /* Scan 3 Integers.
    If at least two of them are even - print 0.
    If at least two of them are odd - print 1. */
    int integer1, integer2, integer3;
    printf("Please enter 3 integers\n");
    scanf("%d %d %d", &integer1, &integer2, &integer3);
    integer1 &= 1;
    integer2 &= 1;
    integer3 &= 1;
    int oddEven = integer1 & integer2;
    oddEven |= integer2 & integer3;
    oddEven |= integer1 & integer3;
    printf("0 - most of them are even, 1 - most of them are odd: %d\n", oddEven);

    // Different Bases
    printf("\nDifferent Bases:\n");
    /*  Scan two numbers:
        One in octal base, one in Hexadecimal base.
        Print their LSB’s.
        Print their MSB’s. */
    printf("Please enter two numbers in octal and hexadecimal bases\n");
    unsigned int input1, input2, bit1, bit2;
    scanf("%o %x", &input1, &input2);
    bit1 = input1 & 1;
    bit2 = input2 & 1;
    printf("LSBs: %d %d\n", bit1, bit2);
    // using 1<<31 to get a bit to mask the MSB
    bit1 = input1 & (1<<31);
    bit2 = input2 & (1<<31);
    printf("MSBs: %d %d\n", bit1>>31, bit2>>31);

    printf("Bye!");

    return 0;
}
