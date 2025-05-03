#include <stdio.h>
#include <string.h>
#include <math.h>

int BinToDec(const char *bin) {
    int dec = 0;
    while (*bin) {
        dec = dec * 2 + (*bin++ - '0');
    } return dec;
} int main() {
    const char *bins[] = {"100101", "1000101101", "1111010110110"};
    int size = sizeof(bins) / sizeof(bins[0]);

    printf("Conversão de binário para decimal e hexadecimal:\n");

    for (int i = 0; i < size; i++) {
        int dec = BinToDec(bins[i]);

        printf("Decimal: %d\n", dec);
        printf("Hexadecimal: %X\n\n", dec);
    } return 0;
}
