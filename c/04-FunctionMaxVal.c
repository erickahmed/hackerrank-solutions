#include <stdio.h>

int max_of_four(int arg1, int arg2, int arg3, int arg4) {
    int delta1, delta2, delta;
    int rshft1, rshft2, rshft;
    int tmax1, tmax2;

    delta1 = arg1 - arg2;
    delta2 = arg3 - arg4;

    rshft1 = (delta1 >> 31) & 1;
    rshft2 = (delta2 >> 31) & 1;

    tmax1 = arg1 - rshft1 * delta1;
    tmax2 = arg3 - rshft2 * delta2;

    delta  = tmax1 - tmax2;
    rshft = (delta >> 31) & 1;
    return (tmax1 - rshft * delta);
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);

    return 0;
}
