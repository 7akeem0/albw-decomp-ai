typedef unsigned char u8;
typedef unsigned int u32;

inline u32 chg(u32 x, u32 b, u32 on) { return on ? (x | b) : (x & ~b); }

struct S {
    u8 pad0[0x214];
    u32 m214;
    u32 m218;
    u32 m21c;
    u32 m220;
    void f(u32 a1, u32 a2);
};

void S::f(u32 a1, u32 a2) {
    u32 v218 = m218;
    int v220 = m220;
    u32 v21c = m21c; v218 = chg(v218, 1, a1);
    m218 = v218;
    v21c = chg(v21c, 1, a1);
    m21c = v21c;
    v220 = chg(v220, 1, a1);
    m220 = v220;
    if (a2) {
    if(a1)m214|=4;else m214&=~4;
    m218 = chg(m218, 4, a1);
    m21c = chg(v21c, 4, a1);
    m220 = chg(v220, 4, a1);}
}
