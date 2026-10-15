#define EN_EXTRA void f(Arg298* a, Vec3* b);
struct Arg298 { unsigned int m0; unsigned int m4; };
#include "en208.h"
void En208::f(Arg298* a, Vec3* b) {
    if (!a || !b) return;
    if (md6c == 0) md6c = a->m4;
    *b = md24;
    a->m4 = md6c + md70;
}
