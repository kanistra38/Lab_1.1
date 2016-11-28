#include <Cmath>
#include "CKutnik.h"
#include "Equation.h"

float Equation (CKutnik &kutnik) {
    return kutnik.n/4 * kutnik.k*kutnik.k * cos(M_PI / kutnik.n) / sin(M_PI / kutnik.n);
}
