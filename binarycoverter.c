#include <stdio.h>
#include <math.h>

// Prototype to convert to binary
long numberToBinary(int);

long numberToBinary(int num)
{
    long binarynum = 0;
    int rem, temp = 1;

    while (num!=0)
    {
        rem = num%2;
        num = num / 2;
        binarynum = binarynum + rem*temp;
        temp = temp * 10;
    }
    return binarynum;
}

int main()
{
    unsigned char number;
    printf("Enter Number ");
    scanf("%d", &number);

    printf("The binary equivalent of %d is: ", number);

    // convert number to binary
    long result = numberToBinary(number);
    printf("%li ", result);

    return 0;
}
