#include <stdio.h>
#include <math.h>
#include "muunna.h"

void muunnaTaulu(unsigned int koko, double *taulu, double (*muunnos)(double))
{
    unsigned int i;
    for (i = 0; i < koko; i++)
    {
        taulu[i] = muunnos(taulu[i]);
    }
}
