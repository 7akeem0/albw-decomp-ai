#define CLS_EXTRA void func_001DC928(bool on);
#include "../shared_include/cls_1DE.h"

void func_0028C318(Model600* m, bool v);   // Model600::setFlagC9(bool)
bool func_004B083C();                       // event kind == 8 || == 0x26

// view of data_00709DF8 (+0x18 sub-struct: s8 kind, s32 id at +0x1c)
struct EvSub {
    s8 kind; char pad[3]; s32 id;
};
struct Ev2 { char pad[0x18]; EvSub sub; };
inline bool isA(s8 k) { return k == 0x16 || k == 0x17; }
inline bool isBp(s8 k, const EvSub* s) { return k == 2 && s->id == 0xb; }

void Cls::func_001DC928(bool on) {
    Ev2* ev = (Ev2*)data_00709DF8;
    if (ev) {
        const EvSub* s = &ev->sub;
        s8 k = s->kind;
        if (isA(k) | isBp(k, s)) {
            func_0028C318(m600, on);
        } else {
            func_0028C318(m600, (u32)k > 5 && (u32)(k - 0x16) > 4 && !func_004B083C() && on);
        }
    }
}
