typedef unsigned int u32;
typedef int s32;
typedef unsigned char u8;

struct Npc;

struct Child {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual bool vf16(Npc*);
};

struct Npc {
    u8 pad0[0x2d7 - 0];
    u8 m2d7;                 // 0x2d7
    u8 pad2d8[0x770 - 0x2d8];
    Child* m770;             // 0x770
    u8 pad774[0x8ac - 0x774];
    u32 m8ac;                // 0x8ac
    u8 pad8b0[0x964 - 0x8b0];
    u8 m964;                 // 0x964
    u8 pad965[0x984 - 0x965];
    s32 m984;                // 0x984
};

extern "C" bool func_00547538(void*);
extern "C" bool func_00547B20(void*);
extern "C" void func_004BC7BC(Npc*);
extern "C" void func_0063741C(Npc*, s32, s32);
extern "C" s32 func_001E6A0C(Npc*);

s32 target(Npc* p) {
    if (func_00547538((u8*)p + 4)) {
        if (!(p->m8ac & 0x10000)) {
            if (p->m770 && p->m770->vf16(p)) {
                func_004BC7BC(p);
            } else {
                p->m2d7 = 1;
                return 0;
            }
        }
        return func_001E6A0C(p);
    }
    if (func_00547B20((u8*)p + 4)) {
        if (p->m964 == 4) func_0063741C(p, p->m984, 0);
    } else {
        func_0063741C(p, 4, 0);
    }
    return func_001E6A0C(p);
}
