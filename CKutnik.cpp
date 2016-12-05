#include "CKutnik.h"

CKutnik::CKutnik (int n, int k)
    :n(n), k(k) {
    }

CKutnik::CKutnik(CKutnik &kutnik)
    :n(kutnik.n), k(kutnik.k) {
    }
