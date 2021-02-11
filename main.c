#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
/*
Function to convert an integer to a string
*/

void Integer_To_String(uint32_t integer, char* pBuffer)
{
    uint32_t copyOfInt = integer;
    uint8_t noOfDigits = 0;

    while(copyOfInt > 0)
    {
        copyOfInt /= 10;
        noOfDigits++;
    }

    while (integer > 0)
    {
        pBuffer[noOfDigits - 1] = '0' + (integer % 10);
        integer /= 10;
        noOfDigits--;
    }
}

int main()
{
    static char buffer[15];
    Integer_To_String(9825,buffer);
    printf("%s\n",buffer);
    return 0;
}
