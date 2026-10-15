typedef unsigned int u32;
typedef int s32;
typedef unsigned char u8;
typedef unsigned short u16;
typedef short s16;
typedef float f32;

struct Vec3 { f32 x, y, z; };

struct Obj {
    u8 pad0[0x2cc];
    u32 m2cc;
    u8 pad2d0[0x3d0 - 0x2d0];
    Vec3 m3d0;
};

struct Blk800 {
    u8 pad0[0x4c];
    u16 m4c;
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
    virtual void request(s32, s32);

    u8 pad0[0x2cc - 4];
    u32 m2cc;
    u8 pad2d0[0x3d0 - 0x2d0];
    Vec3 m3d0;
    u8 pad3dc[0x810 - 0x3dc];
    u32 m810;
    u8 pad814[0x818 - 0x814];
    u32 m818;
    u8 pad81c[0x854 - 0x81c];
    u8 m854;
    u8 pad855[0x858 - 0x855];
    u8 m858;
    u8 pad859[0x85f - 0x859];
    u8 gate85f;
    u8 pad860[0x904 - 0x860];
    s16 m904[6];
};

extern "C" void func_00115C70(void*, void*, void*);
extern "C" u32 func_004904CC(f32, f32);

inline void clearSix(Npc* q) {
    q->m904[0] = -1; q->m904[1] = -1; q->m904[2] = -1;
    q->m904[3] = -1; q->m904[4] = -1; q->m904[5] = -1;
}

void req(Npc* q) { q->request(q->m854, -1); }

void target(Npc* p, Obj* a1, s32 a2) {
    Blk800* b = (Blk800*)((u8*)p + 0x800);
    if (a2 == 0) {
        if (a1 == 0) {
            b->m4c = 0;
            p->m810 = p->m2cc;
            return;
        }
        p->m810 = a1->m2cc;
        return;
    }
    if (a1 == 0 || p->m858 == 1) return;
    p->gate85f = 1;
    clearSix(p);
    req(p);
    Vec3 out;
    Vec3* src = (Vec3*)((u8*)a1 + 0x3d0); __schedule_barrier();
    func_00115C70(&out, src, &p->m3d0);
    f32 fx = out.x;
    f32 fz = out.z;
    p->m818 = func_004904CC(fx, fz);
    p->m810 = a1->m2cc;
}
