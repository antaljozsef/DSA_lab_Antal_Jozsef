#include <stdio.h>
#include "Functions.h"

int main() {

    int m,n;
    printf("m= ");
    scanf("%i",&m);
    printf("n= ");
    scanf("%i",&n);

    int tmp;

    int *hasito = create(m);
    for (int i = 0; i < n; ++i) {
        scanf("%i",&tmp);
        beszur(tmp,hasito,m);
    }
    printf("A hasito tabla:  ");
    for (int i = 0; i < m; ++i) {
        printf("%i ",hasito[i]);
    }

    int k;
    printf("k= ");
    scanf("%i",&k);
    printf("A keresett elem az %i. pozicioban talalhato", keres(k,hasito,m));

    int t;
    printf("Torolni kivant: ");
    scanf("%i",&t);
    torol(t,hasito,m);

    printf("\nA hasito tabla:  ");
    for (int i = 0; i < m; ++i) {
        printf("\n%i ",hasito[i]);
    }

    return 0;
}
