#include <stdio.h>
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
    int decs[] = {297, 4021, 9135};
    char bin[65];

    printf("Conversão de decimal para binário e hexadecimal:\n");

    for (int i = 0; i < 3; i++) {
        DecToBin(decs[i], bin);
        printf("Decimal: %d\n", decs[i]);
        printf("Binário: %s\n", bin);
        printf("Hexadecimal: %X\n\n", decs[i]);
    } return 0;
}
