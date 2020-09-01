#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int v[5] = {10, 20, 30, 40, 50};
    printf("%d\n", *(v+1));
}
