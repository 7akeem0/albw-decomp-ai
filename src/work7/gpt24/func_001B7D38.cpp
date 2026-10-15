#include "range.h"
extern void func_0058FA5C(void*);
struct Object1B7D {
    virtual ~Object1B7D();
    char pad[0x18-4];void* a;void* b;
};
Object1B7D::~Object1B7D(){func_0058FA5C(a);func_0058FA5C(b);}
