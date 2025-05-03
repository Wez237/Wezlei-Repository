#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void DecToBin(int dec, char *bin) {
    char temp[65];
    int i = 0;

    if (dec == 0) {
        strcpy(bin, "0");
        return;
    } while (dec > 0) {
        temp[i++] = (dec % 2) + '0';
        dec /= 2;
    } temp[i] = '\0';

    for (int j = 0; j < i; j++) {
        bin[j] = temp[i - j - 1];
    } bin[i] = '\0';
} int main() {
    const char *hexdecs[] = {"7CD", "9873", "2F5AB"};
    int size = sizeof(hexdecs) / sizeof(hexdecs[0]);
    char bin[65];
    int dec;

    printf("Conversão de hexadecimal para binário e decimal:\n");

    for (int i = 0; i < size; i++) {
        sscanf(hexdecs[i], "%x", &dec);
        DecToBin(dec, bin);

        printf("Decimal: %d\n", dec);
        printf("Binário: %s\n\n", bin);
    } return 0;
}
