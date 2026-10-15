

typedef unsigned char u8; typedef signed char s8;
typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
extern "C" void func_00110848(void*);
struct Eff { u8 pad[0x1c]; s32 id; };
struct EffHandle { Eff* p; s32 id; };
struct EffRet { EffHandle h; s32 x; };
struct Anim344 { EffHandle start(const char* name); };
struct Obj {
    u8 pad0[0x20];
    Anim344* m20;
    void startEff(EffHandle* h, const char* name);
};
void Obj::startEff(EffHandle* h, const char* name) {
    if (m20 == 0) {
        h->p = 0;
        h->id = 0;
        return;
    }
    if (h->p != 0) {
        s32 id=h->id;Eff*p=h->p;if(h->p->id == h->id)func_00110848(h->p);
    }
    *h = m20->start(name);
}
