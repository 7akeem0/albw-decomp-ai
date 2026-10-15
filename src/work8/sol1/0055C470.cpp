


typedef unsigned char u8;
typedef signed char s8;
typedef unsigned short u16;
typedef short s16;
typedef unsigned int u32;
typedef int s32;
typedef float f32;


struct NoThrow {};
void* operator new(unsigned int, NoThrow);
inline void* operator new(unsigned int, void* p) { return p; }



struct Host58;
struct Flags58 {
    char pad0[0xc4];
    u8 mC4;
};
struct Host58 {
    char pad0[0xf0];
    Flags58* mF0;
};



struct E55C { char pad[0x34]; u32 a, b, c; };
struct O55C { char pad[0xc]; s32 mC; u32 m10, m14, m18; };
void f55C470(O55C* o, u8* b) {
    s32 i = o->mC;
    if ((u32)i >= 6) return;
    u8*base4=b+0x1458;E55C*e=(E55C*)(base4+76*i);__schedule_barrier();
    e->a = o->m10;
    e->b = o->m14;
    e->c = o->m18;
}


struct O55D { char pad[0x384]; u32 m384; };
bool func_0058124C();
bool func_00532C78(void*);
bool f55D680(O55D* o) {
    if (!o->m384) {
        if (!func_0058124C()) return false;
    }
    if (func_00532C78((u8*)o + 0x3c) == 0) return true;
    return false;
}


struct V568 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual bool v9(); virtual bool v10(int);
};
bool f568A68(V568* o) {
    if (!o->v9()) return false;
    return o->v10(0);
}


struct P58X2 { char pad[0xd]; u8 m0D; u8 m0E; };
extern void* data_007142C8;
bool func_0058D860(void*);
bool f576874(P58X2* o) {
    if (o->m0D != 0 || o->m0E != 0) return false;
    return func_0058D860(data_007142C8) != 0;
}


struct T5FF { char pad[0x18]; u8* m18; char pad2[0x3c-0x1c]; u8 m3C; };
extern u8 bss_0079CAB8[];
void f5FFBDC(s32 idx) {
    T5FF* t = *(T5FF**)(bss_0079CAB8 + 0x9c);
    if (!t) return;
    if (idx == -1) { t->m3C = 1; return; }
    u8* tbl = t->m18;
    s32 off = idx * 28 - 27;
    tbl[off] = 1;
}
