#include <stdio.h>
int main () {

    int numeros[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    for (int i = 0; i <10; i++){
        if (numeros[i] % 2 == 0) {
            printf ("%d\n", numeros[i]);
        }
    }

return 0;
}
