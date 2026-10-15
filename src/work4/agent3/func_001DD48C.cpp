#define CLS_EXTRA bool func_001DD48C(int v, int b);
#include "../shared_include/cls_1DE.h"

template <typename T> inline T Min(T a, T b) { return a <= b ? a : b; }
struct EventState2 { char pad[0x18]; s8 m18; };
struct Obj709F30;
extern Obj709F30* data_00709F30;
void func_004C69DC(Obj709F30* o, u16 n);
void func_00149BD4(u8* life, int v, int b);

bool Cls::func_001DD48C(int v, int b) {
    if (m598 == 0 || m6c1)
        return false;
    if (v < 0) {
        s8 ev = ((EventState2*)data_00709DF8)->m18;
        if (ev == 7 || ev == 0x25) {
            int n = Min(-v, (int)m598);
            if (n > 0) {
                if (data_00709F30)
                    func_004C69DC(data_00709F30, n);
            }
        }
    }
    func_00149BD4(&m598, v, b);
    return true;
}
