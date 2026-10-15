// 0x138D08: clear + actor lookup + two tail calls.
typedef unsigned int u32;
typedef short s16;
typedef unsigned char u8;

extern void* data_00706E20;
extern "C" void* func_0052FBDC(void*, s16, u32);
extern "C" void* func_0052FBA0(void*, u32);
extern "C" void  func_00547514(void*);
extern "C" void  func_00588C14(void*, u32, u32);

struct Actor {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void va(); virtual void vb();
    virtual void vc(u32);
};

void f(void* self) {
    u8* p = *(u8**)((u8*)self + 0x434);
    p[0x44] = 0;
    s16 id = *(s16*)((u8*)self + 0x5e);
    if (id > 0) {
        Actor* a = (Actor*)func_0052FBDC((u8*)data_00706E20 + 0x3dbbc, id, 0);
        if (a != 0) {
            void* h = *(void**)((u8*)a + 0x2cc);
            Actor* b = (Actor*)func_0052FBA0((u8*)data_00706E20 + 0x3dbbc, (u32)h);
            if (b != 0)
                b->vc(0);
        }
    }
    func_00547514((u8*)self + 4);
    func_00588C14(self, 0, 1);
}
