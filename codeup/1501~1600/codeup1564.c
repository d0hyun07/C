int gcd(int n, int m) {
    int i,gcd_v;
    if (n >= m) {
        i = m;
    }
    else { i = n; }
    for (int j = 1; j <= i; j++) {
        if (n % j == 0 && m % j == 0) {
            gcd_v = j;
        }
    }
    return gcd_v;
}
