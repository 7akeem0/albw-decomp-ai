// 0x210CAC En210 D1 dtor (check --sym D1). Base Base6EDB00 (agent9 dtor_a9.h, base vptr stores survive).
// Member at +0xA7C: its type has an IMPLICIT dtor calling an out-of-line base dtor 0x36CB64 (returns this ->
// orig chains r0 for the base vptr stores with vt in r1 / vt+0x84 in r2; a plain out-of-line member dtor gives r2/r1 swapped, 82.6%).
// Members at +0xD48/+0xD74: inline dtor calling void 0x36D0E0 (orig recomputes from r4 after each call).
#include "../agent9/dtor_a9.h"
struct MemA7Cb { ~MemA7Cb(); char pad[0x2cc]; };   // dtor 0x36CB64
struct MemA7C : MemA7Cb {};
struct MemD48;
void func_0036D0E0(MemD48* m);
struct MemD48 { ~MemD48() { func_0036D0E0(this); } char pad[0x2c]; };
class En210D : public Base6EDB00 {
public:
    virtual ~En210D();
    char pad410[0xa7c - 0x410];
    MemA7C ma7c;
    MemD48 md48;
    MemD48 md74;
};
En210D::~En210D() {
}
