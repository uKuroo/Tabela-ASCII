#include <stdio.h>

int main()
{
    int aaa, num, bin = 0, b[8];
    char ch = '\0';
    num = ch;
    for(aaa = 0;aaa <= 127;aaa++){
        bin = 0;
        for(int iCont = 0; iCont < 8; iCont++){
            b[iCont] = num%2;
            num /= 2;
        }
        long int base = 1;
        for(int iCont = 0; iCont < 8; iCont++){
            bin += b[iCont] * base;
            base *= 10;
        }
        printf("%c %d %08d\n", ch, ch, bin);
        ch++;
        num = ch;
    }

    return 0;
}
