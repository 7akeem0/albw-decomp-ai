typedef unsigned int u32;
typedef int s32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef float f32;

struct Vec3 { f32 x, y, z; };

struct Npc;

struct Sub {
    u8 pad18[0x18];
    s32 m18;
    u8 m1c;
};

struct Obj7ac {
    u8 pad0c[0xc];
    s32 mNum;                  // +0xc
    s32 mMax;                  // +0x10
    Sub* mData;                // +0x14
    Sub& operator[](s32 i) {
        if ((u32)i < (u32)mNum) return mData[i];
        return mData[0];
    }
};

struct Npc {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27();
    virtual void v28(); virtual void v29(); virtual void v30(); virtual void v31();
    virtual void v32(); virtual void v33(); virtual void v34(); virtual void v35();
    virtual void v36(); virtual void v37(); virtual void v38(); virtual void v39();
    virtual void v40(); virtual void v41(); virtual void v42();
    virtual void request(u8, s32);

    u8 pad4[0x3e8 - 4];
    s32 m3e8;                  // +0x3e8
    u8 pad3ec[0x7ac - 0x3ec];
    Obj7ac* m7ac;              // +0x7ac
    u8 pad7b0[0x7c0 - 0x7b0];
    void* m7c0;                // +0x7c0
    u8 pad7c4[0x848 - 0x7c4];
    u16 m848;                  // +0x848
    u16 m84a;                  // +0x84a
    u8 pad84c[0x850 - 0x84c];
    u16 m850;                  // +0x850
    u8 m852, m853;             // +0x852
    u8 pad854[0x857 - 0x854];
    u8 m857;                   // +0x857
    u8 pad858[0x911 - 0x858];
    u8 m911;                   // +0x911
    u8 pad912[0x914 - 0x912];
    u8 m914;                   // +0x914
};

extern "C" void func_004C1300(Npc*, s32);
extern "C" s32 func_004C1388(Npc*);
extern "C" s32 func_00583B1C(Npc*);
extern "C" Vec3* func_00520FC0(Npc*);
extern "C" s32 func_004C10C4(Npc*, Vec3*, u32, s32, f32, f32);
extern "C" u32 func_00111A64(void*);
extern "C" void func_0060F278(Npc*, s32, s32);
extern "C" void* data_007124F0;

inline u32 below(void* r, u32 n) { return (u32)(((unsigned long long)func_00111A64(r) * n) >> 32); }

s32 target(Npc* self, s32 a1) {
    if (a1 != 0) func_004C1300(self, a1);
    u8 a857 = self->m857;
    u16 b0 = 0;
    if (a857 != 0) {
        if (func_004C1388(self) == 0) goto Lba18;
        goto RET1;
    }
    if (self->m911 == 0xff) goto RET1;
    if (self->m852 == self->m911) {
        Obj7ac* o = self->m7ac;
        if ((*o)[0].m1c != 0) {
            if ((*o)[0].m18 <= (s32)self->m850) goto RET1;
        } else {
            if (func_00583B1C(self) == 0) goto RET1;
        }
        self->m850 = (u16)(below((u8*)data_007124F0 + 0x660, 300) + 100);
        self->request(self->m853, -1);
        goto RET1;
    }
    {
        f32 kMin = 3.0f;
        u32 neg0 = 0x80000000u;
        f32 kMax = 5.5f;
        if (func_004C10C4(self, func_00520FC0(self), neg0, self->m3e8, kMin, kMax) != 0) goto RET1;
    }
    if (self->m850 != 0) {
        self->m850 = (u16)(self->m850 - 1);
        goto RET1;
    }
    if ((*self->m7ac)[0].m1c != 0) {
        self->m850 = (u16)below((u8*)data_007124F0 + 0x660, 2);
    }
    self->request(self->m911, -1);
    goto RET1;

Lba18:
    if (self->m84a != 0) {
        self->m84a = (u16)(self->m84a - 1);
        goto Lba78;
    }
    if (self->m914 == 0) {
        self->m848 = b0;
        goto Lba5c;
    }
    if (self->m848 != 0) {
        self->m848 = (u16)(self->m848 - 1);
        if (self->m848 != 0) goto RET1;
    }
Lba5c:
    if (self->m7c0 == 0) goto RET1;
    func_0060F278(self, 1, 0);
Lba78:
    return 0;
RET1:
    return 1;
}
