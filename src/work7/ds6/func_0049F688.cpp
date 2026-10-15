#include "ds6.h"

struct Node49F688 { Node49F688* m0; Node49F688* m4; };
struct List49F688 {
    char _pad[4];
    Node49F688* m4;
    s32 m8;
};

Node49F688* func_0049F688(List49F688* self) {
    if (self->m8 <= 0) return 0;
    Node49F688* p = self->m4;
    if (p->m0) p->m0->m4 = p->m4;
    if (p->m4) p->m4->m0 = p->m0;
    p->m4 = 0;
    p->m0 = 0;
    self->m8--;
    return p;
}
