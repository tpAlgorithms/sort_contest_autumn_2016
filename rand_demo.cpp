#include <cstdlib>
#include <cstdio>

int main() {

    srand(42);
    for (int i = 0; i < 10; ++i) {
        int a = rand();
        printf("%d\n", a);
    }
    return 0;
} 
