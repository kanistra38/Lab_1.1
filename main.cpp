#include <iostream>
#include "CKutnik.h"

using namespace std;

int main(void) {
    CKutnik *kutnik = new CKutnik(7, 6);
    cout << Equation(*kutnik) << endl;
}
