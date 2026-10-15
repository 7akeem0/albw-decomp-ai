#include "ds6.h"

struct Node49F634 { Node49F634* m0; Node49F634* m4; };
struct List49F634 {
    Node49F634* m0;
    Node49F634* m4;
    s32 m8;
};

Node49F634* func_0049F634(List49F634* self) {
    if (self->m8 <= 0) return 0;
    Node49F634* p = self->m0;
    if (p->m0) p->m0->m4 = p->m4;
    if (p->m4) p->m4->m0 = p->m0;
    p->m4 = 0;
    p->m0 = 0;
    self->m8--;
    return p;
}

