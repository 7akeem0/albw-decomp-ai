// 0x56CB68: p = f56AF34(this->m3c); if (!p) return false; k = f56B838(p);
//           k==0: x = f56B85C(p); out->m0 = x->m8; out->m4 = (x->m4 == -1) ? -1 : x->m4 + 8; return true;
//           k==1: out->m8 = f56B80C(p); return true;  k==2: return false;  other: return true
typedef unsigned int u32;
typedef int s32;
typedef unsigned char u8;

struct Self118b {
    u8 pad0[0x3c];
    u8* m3c;
};

struct XRec118 {
    u32 m0;
    s32 m4;
    u32 m8;
};

struct Out118b {
    u32 m0;
    s32 m4;
    u32 m8;
};

u8* func_0056AF34(u8* p);
u32 func_0056B838(u8* p);
XRec118* func_0056B85C(u8* p);
u32 func_0056B80C(u8* p);

bool func_0056CB68(Self118b* self, u32 a, Out118b* out)
{
    u8* p = func_0056AF34(self->m3c);
    if (p == 0)
        return false;
    u32 k = func_0056B838(p);
    if (k == 0) {
        XRec118* x = func_0056B85C(p);
        out->m0 = x->m8;
        s32 v = x->m4;
        out->m4 = (v == -1) ? v : v + 8;
        return true;
    }
    if (k == 1) {
        out->m8 = func_0056B80C(p);
        return true;
    }
    if (k == 2)
        return false;
    return true;
}
