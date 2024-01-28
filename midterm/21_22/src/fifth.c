#include <stdio.h>

int main() {

    struct s {
        char c;
        int a[3];
    };

    struct s p[5] = {{'A', {1, 2, 3}},
                    {'B', {4, 5, 6}},
                    {'C', {7, 8, 9}},
                    {'D', {11, 12, 14}}}; 

    printf("p[2].a: %d", p[2].a[1]);

    return 0;
}