typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32;

struct Iface { virtual void vf0(void* p); };
Iface* func_004F042C();
struct Obj;
void func_004C3A70(Obj* self);

struct Obj {
    char pad0[0x14];
    char* m14;
    char pad18[0x9b9 - 0x18];
    u8 m9b9;
    char pad9ba[0x9bc - 0x9ba];
    u32 m9bc;
};

template<class T0> inline void hlp12(T0 self) { func_004C3A70(self); }
template<class T0> inline void hlp11(T0 self) { if (self->m9b9 != 0) {
        Iface* o = func_004F042C();
        if (o != 0) {
            o->vf0(self->m14 + 0xe00); 
            hlp12(self);
        }
    } }
template<class T0, class T1, class T2> inline void hlp10(T0 self, T1 base, T2 idx) { self->m14 = (char*)(base + idx * 0x581); }
void func_004C38B0(Obj* self, u32 idx) {
    u32* base = (u32*)((char*)self + 0x9cc);
    self->m9bc = idx; 
    hlp10(self, base, idx); 
    hlp11(self);
}
