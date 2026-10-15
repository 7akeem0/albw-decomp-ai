#pragma once
typedef unsigned char u8;
typedef signed char s8;
typedef unsigned short u16;
typedef short s16;
typedef unsigned int u32;
typedef int s32;
typedef unsigned long long u64;
typedef long long s64;
typedef float f32;
typedef double f64;
typedef unsigned long ulong;

struct BitFlag32 {
    u32 v;
    void change(u32 m, bool on) {
if (on) v |= m;
else v &= ~m;
}
    void set(u32 m) {
change(m, true);
}
    void reset(u32 m) {
change(m, false);
}
};

struct BitFlag16 {
    u16 v;
    void change(u16 m, bool on) {
if (on) v |= m;
else v &= ~m;
}
    void set(u16 m) {
change(m, true);
}
    void reset(u16 m) {
change(m, false);
}
};
struct Vec3 {
f32 x, y, z;
};
struct Sub {
u32 m0;
u32 m4;
void** m8;
};
struct Elem {
Sub* m0;
};
struct Mgr {
char pad[8];
Elem* arr[6];
};
struct This16 {
char pad[0xf74];
Mgr* mF74;
};

char* at(Sub*s,const u32&i){
if(s->m0>(u32)i)return (char*)s->m8[i];
return 0;
}
void func_0016C524(This16* t, u32 idx, const Vec3& v) {
  Sub * perm_t68;
    Mgr* m = t->mF74;
    Elem** a = m->arr;
    if (idx < 6) a += idx;
    if (*a == 0) return;
    Elem** b = m->arr;
    if (idx < 6) b += idx;
    Sub* s = (*b)->m0;
    if (s) { perm_t68 = s; } else { perm_t68 = s; } if (perm_t68 == 0) return;
    char*o=at(s,0);
    *(Vec3*)(o + 0x40) = v;
}
