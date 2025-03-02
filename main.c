#include <stdio.h>
#include <math.h>

int faktoriyel(int a) {
    int sonuc = 1;
    for (int i = 2; i <= a; i++) {
        sonuc *= i;
    }
    return sonuc;
}

int katsayi(int n, int k) {
    if (k > n) return 0;
    return faktoriyel(n) / (faktoriyel(k) * faktoriyel(n - k));
}

int us_al(int taban, int us) {
    int sonuc = 1;
    for (int i = 0; i < us; i++) {
        sonuc *= taban;
    }
    return sonuc;
}

void binom_acilimi(int n, int a, int b) {
    for (int k = 0; k <= n; k++) {
        int c = katsayi(n, k);
        int carpim1 = us_al(a, n - k);
        int carpim2 = us_al(b, k);
        printf("%d * %d * %d", c, carpim1, carpim2);
        if (k != n) printf(" + ");
    }
    printf("\n");
}

int main() {
    int n, a, b;
    printf("n, a ve b degerlerini girin: ");
    scanf("%d %d %d", &n, &a, &b);
    binom_acilimi(n, a, b);
    return 0;
}

