#include <stdio.h>

int sum(int n) {
    if (n == 0) {
        return 0;
    }
    return sum(n - 1) + n;
}

int Isum(int n) {
    int s = 0;
    int i;
    for(i = 1; i <= n; i++) {
        s = s + i;
    }
    return s;
}

int fact(int n) {
    if (n == 0) {
        return 1;
    }
    return fact(n - 1) * n;
}

int Ifact(int n) {
    int result = 1;
    int i;

    for (i = 1; i <= n; i++) {
        result = result * i;   
    }

    return result;
}

int pow(int m, int n) {
    if (n == 0) {
        return 1;
    }

    if (n % 2 == 0) {
        return pow(m * m, n/2);
    }
    else {
        return m * pow(m * m, (n - 1)/2);
    }
}

int Ipow(int m, int n) {
    int result = 1;
    int exp = n;

    if (exp < 0) {
        m = 1 / m;
        exp = -exp;
    }

    while (exp > 0) {
        if (exp % 2 == 1) {
            result *= m;
        }
        m *= m;
        exp /= 2;
    }

    return result;
}

int main() {
    int r;
    r = Ipow(2, 5);
    printf("%d", r);
    return 0;
}