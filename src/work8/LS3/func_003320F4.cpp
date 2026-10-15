typedef unsigned int u32;
typedef unsigned char u8;
typedef unsigned short u16;
namespace sead {
struct SafeString {
    SafeString(const char* s) : text(s) {}
    virtual void assureTerminationImpl_() const;
    const char* text;
};
}
extern "C" void func_0014E2A0(void*, void*, void*, u32, u32, u32);
extern "C" void func_00150A84(void*, const sead::SafeString&, u32);
extern "C" void func_001E4090(void*, u32);
extern "C" void func_001E405C(void*, u32);
extern "C" void func_004CF478(void*, u32, u32);
extern "C" void func_006657B4(void*, u32);
extern "C" u32 func_0052F7F4(void*);
extern "C" void func_002E01FC(void*);

struct Obj3320F4 {
    u8 pad0[0x2c];
    u16 m2c;
    u8 pad2e[0x47c - 0x2e];
    void* m47c;
};

extern "C" void func_003320F4(Obj3320F4* self) {
    func_0014E2A0(self, *(void**)((u8*)self + 0x49c), (u8*)self + 0x4a0, 0x100, 0, 0);
    u16 state = self->m2c;
    if (state == 1) {
        void* p = *(void**)((u8*)self + 0x4c0);
        if (p == 0) return;
        func_00150A84(self, sead::SafeString("SE_Door_CLOSE"), 0);
        func_001E4090(self, 1);
        func_001E405C(self, 1);
        func_004CF478(self->m47c, 1, 0);
        func_006657B4((u8*)self + 0x4c0, 3);
        return;
    }
    u8 openPlayed = *((u8*)self + 0x515);
    if (openPlayed == 0) {
        func_00150A84(self, sead::SafeString("SE_Door_OPEN"), 0);
        *((u8*)self + 0x515) = 1;
    }
    if (func_0052F7F4(self) == 0) return;
    func_002E01FC(self);
    func_006657B4((u8*)self + 0x4c0, 4);
    *((u8*)self + 0x495) = 1;
}
