#include "ds6.h"

struct Node49FCA8 { Node49FCA8* m0; Node49FCA8* m4; Node49FCA8* m8; Node49FCA8* mC; };

void func_0049FCA8(Node49FCA8* n);

void func_0049FCA8(Node49FCA8* n) {
    Node49FCA8* p = n->m4;
    if (p == 0) return;
    do {
        Node49FCA8* cur = p;
        p = p->m8;
        func_0049FCA8(cur);
        cur->mC = 0;
        cur->m8 = 0;
        cur->m4 = 0;
        cur->m0 = 0;
    } while (p != 0);
}
