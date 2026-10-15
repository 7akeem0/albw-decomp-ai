typedef unsigned int u32;
typedef int s32;
typedef unsigned char u8;
typedef signed char s8;
typedef unsigned short u16;
typedef float f32;

extern "C" u32 func_00111A64(void*);
extern "C" void* data_007124F0;
inline u32 below(void* r, u32 n) { return (u32)(((unsigned long long)func_00111A64(r) * n) >> 32); }

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
    virtual void request(s32, s32);

    u8 pad0[0x853 - 4];
    u8 id853;                // 0x853
    u8 pad854[0x911 - 0x854];
    u8 flag911;              // 0x911
};

struct Blk800 {
    u8 pad0[0x34];
    f32 m34;                 // 0x834
    u8 pad38[0x48 - 0x38];
    u16 m48;                 // 0x848
    u16 m4a;                 // 0x84a
    u8 pad4c[0x50 - 0x4c];
    u16 m50;                 // 0x850
};

void target(Npc* p) {
    Blk800* b = (Blk800*)((char*)p + 0x800);
    b->m34 = 0.0f;
    p->request(p->id853, -1);
    u32 r;
    if (b->m4a) r = 0;
    else r = below((u8*)data_007124F0 + 0x660, 0x96) + 0x96;
    b->m48 = r;
    if (p->flag911 != 0xff) b->m50 = below((u8*)data_007124F0 + 0x660, 0x12c) + 0x64;
    p->v38();
}
