#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("1. 1 > 2  bernilai: %s\n", &"false\0true\0"[( 1 > 2  )  * 6]);
    printf("2. 1 < 2  bernilai: %s\n", &"false\0true\0"[( 1 < 2  )  * 6]);
    printf("3. 1 == 2 bernilai: %s\n", &"false\0true\0"[( 1 == 2 )  * 6]);
    system("PAUSE");
    return 0;
}
