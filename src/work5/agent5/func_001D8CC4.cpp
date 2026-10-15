typedef unsigned int u32;
typedef unsigned char u8;
struct Q { u8 m0; u8 m1; };
struct P {
    char pad0[0x2c];
    Q* m2c;
    u32 m30;   // top nibble = kind
};
inline bool isK(const P* p) { return p->m2c->m1 == 5 && (p->m30 >> 28) == 1; }
struct Obj {
    bool f(const P* p);
};
// orig 'mov r0,#0' before the null test (r0 flows into the eor) = 'bool r=false; if(p->m2c) r=isK(p); return !r;'
bool Obj::f(const P* p) { bool r = false; if (p->m2c) r = isK(p); return !r; }
