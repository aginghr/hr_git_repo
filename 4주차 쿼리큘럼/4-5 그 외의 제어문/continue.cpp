#include <iostream>
using namespace std;

int main(void) {
        int i;

        for (i = 1;i <= 50;i++) {
            if (i % 9 == 0)
                continue;

            if (i % 3 == 0)
                printf("%d\n", i);
        }
    }