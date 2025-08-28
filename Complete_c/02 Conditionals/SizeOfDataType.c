#include <stdio.h>
int main()
{
    // print of character.
    char ch = 'd';
    printf(" Character = %d bytes\n", sizeof(char));
    printf(" Integer = %d bytes\n", sizeof(int));
    printf(" Short integer = %d bytes\n", sizeof(short int));
    printf(" Long int = %d bytes\n", sizeof(long int));
    printf(" Float = %d bytes\n", sizeof(float));
    printf(" Double = %d bytes\n", sizeof(double));
    printf(" Long double = %d bytes\n", sizeof(long double));
    return 0;
}