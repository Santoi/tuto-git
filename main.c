#include <stdio.h>
#include <stdlib.h>

int suma(int a, int b);

int suma(int a, int b) {
    return a + b;
}

int main(int argc, char *argv[]) {
    if (argc != 3) {
        fprintf(stderr, "Se requieren 2 números para sumarlos\n\t$ ./suma <num1> <num2>\n");
        return 1;
    }

    int a = atoi(argv[1]), b = atoi(argv[2]);
    printf("%d\n", suma(a, b));

    return 0;
}
