#include <stdio.h>
#include <assert.h>

char size(int cms) {
    char sizeName = '\0';
    if (cms < 38) {            // include 38
        sizeName = 'S';
        printf("For CM %d Size S\n",cms);
    } else if (cms > 38 && cms < 42) {     // include 42
        sizeName = 'M';
        printf("For CM %d Size M\n",cms);
    } else if(cms > 42) {
        sizeName = 'L';
         printf("For CM %d Size L\n",cms);
    }
    return sizeName;
}

void testTshirtSize() {
    printf("\nTshirt size test\n");
    assert(size(37) == 'S');  // S
    assert(size(38) == 'S');  // Edge case
    assert(size(40) == 'M');  // M
    assert(size(42) == 'M');  // Edge case
    assert(size(43) == 'L');  // L
    printf("All is well (maybe!)\n");
}

int main() {
    testTshirtSize();
    return 0;
}
