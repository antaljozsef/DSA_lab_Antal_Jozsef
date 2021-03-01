#include <stdio.h>

float Perc(int masodperc);
float Ora(int Perc);

int main() {
    int masodperc;
    printf("Masodperc: ");
    scanf("%i", &masodperc);

    float perc;
    perc = Perc(masodperc);

    int Perc = perc;
    perc -= Perc;
    perc *= 60;

    float ora;
    ora = Ora(Perc);

    int Ora = ora;
    ora -= Ora;
    ora *= 60;

    printf("Ejfeltol eltelt: %i ora, %.0f perc, es %.0f masodperc", Ora, ora, perc);
    return 0;
}
float Perc(int masodperc)
{
    return (float)masodperc / 60;
}

float Ora(int Perc)
{
    return (float)Perc / 60;
}