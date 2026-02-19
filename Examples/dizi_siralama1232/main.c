#include <stdio.h>
#include <stdlib.h>

// Karþýlaþtýrma fonksiyonu: a < b ise negatif, eþitse 0, büyükse pozitif döner
int karsilastir(const void *a, const void *b) {
    int x = *(const int *)a;
    int y = *(const int *)b;
    return x - y;
}

int main() {
    int dizi[100] = {
        742, 15, 389, 602, 123, 874, 512, 91, 456, 230,
        678, 342, 88, 999, 12, 471, 310, 265, 703, 84,
        151, 920, 37, 819, 57, 610, 234, 781, 341, 289,
        469, 198, 647, 93, 500, 66, 133, 720, 876, 380,
        48, 311, 259, 737, 318, 185, 601, 303, 799, 44,
        290, 845, 154, 206, 741, 399, 605, 141, 372, 613,
        111, 983, 524, 305, 70, 26, 134, 951, 825, 147,
        366, 251, 421, 399, 673, 917, 214, 163, 554, 189,
        81, 422, 335, 878, 94, 709, 303, 516, 295, 38,
        167, 418, 631, 909, 486, 232, 365, 99, 718, 886
    };

    // Diziyi sýrala
    qsort(dizi, 100, sizeof(int), karsilastir);

    // Sýralý diziyi yazdýr
    for (int i = 0; i < 100; i++) {
        printf("%4d ", dizi[i]);
        if ((i + 1) % 10 == 0)
            printf("\n");
    }

    return 0;
}

