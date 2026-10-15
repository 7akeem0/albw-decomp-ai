
typedef unsigned int u32;
typedef int s32;
typedef unsigned char u8;
typedef signed char s8;
typedef unsigned short u16;
typedef float f32;

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
    virtual void v36(); virtual void v37(); virtual void v38();
    virtual void v39(); virtual void v40(); virtual void v41(); virtual void v42();
    virtual void request(s32, s32);
    u8 pad0[0x3d0 - 4];
    u8 m3d0[0xc];
    u8 pad3dc[0x3e8 - 0x3dc];
    u32 m3e8;
    u8 pad3ec[0x848 - 0x3ec];
    u16 m848;
    u8 pad84a[0x852 - 0x84a];
    u8 m852;
    u8 pad853[0x857 - 0x853];
    u8 m857;
    u8 pad858[0x85c - 0x858];
    s8 m85c;
    u8 pad85d[0x8b4 - 0x85d];
    f32 m8b4;
    f32 m8b8;
};

extern "C" u32 func_00111A64(void*);
u32 ctx_0060BC9C_0(void* a0);

extern "C" void func_004BFF60(Npc*, s32, s32, bool, f32, s32, s32, void*);
extern "C" void* data_007124F0;
inline u32 below(void* r, u32 n) { return (u32)(((unsigned long long)ctx_0060BC9C_0(r) * n) >> 32); }


void target(Npc* p) {
    if (p->m857 == 2 && p->m85c >= 4) p->request(p->m85c, -1); else { Npc* q = p; q->request(3, -1); }
    p->m848 = (u16)(below((char*)data_007124F0 + 0x660, 0x96) + 0x96);
    s8 x2 = p->m85c;
    f32 f = (p->m852 == x2) ? p->m8b8 : p->m8b4;
    s32 e = (s32)p->m3e8;
    func_004BFF60(p, 0, 0, p->m857 == 3, f, 0, e, &p->m3d0);
    p->v38();
}

u32 ctx_0060BC9C_0(void* a0){return func_00111A64(a0);}
