#ifndef EXAM_H
#define EXAM_H

class CKutnik {
private:
    int n, k;
    friend float Equation (CKutnik &kutnik);
public:
    CKutnik(int n, int k);
    CKutnik(CKutnik &kutnik);
};

#endif
