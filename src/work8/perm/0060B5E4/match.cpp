typedef unsigned int u32;
typedef int s32;
typedef unsigned char u8;
typedef signed short s16;
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
    virtual void v36(); virtual void v37(); virtual void v38(); virtual void v39();
    virtual void v40(); virtual void v41(); virtual void v42();
    virtual void request(s32, s32);
    u8 pad3e8[0x3e8 - 4];
    s32 m3e8;
    u8 pad3ec[0x818 - 0x3ec];
    u32 m818;
    u8 pad81c[0x852 - 0x81c];
    u8 m852;
    u8 pad853;
    u8 m854;
    u8 m855;
    u8 pad856[0x858 - 0x856];
    u8 m858;
    u8 pad859[0x8ac - 0x859];
    u32 m8ac;
    u8 pad8b0[0x904 - 0x8b0];
    s16 m904;
    u8 pad906[0x938 - 0x906];
    u32 m938[2];
    u8 pad940[0x988 - 0x940];
    u8 m988;
};

extern "C" void func_004C1418(Npc*, bool);
extern "C" void func_004BDA28(Npc*);
extern "C" void func_004C01E4(Npc*);
extern "C" s32 func_0051D2F4(s32*, s32, f32, s32, s32);
void bump(Npc* p);



void target(Npc* p) {
    bool s = p->m988;
    if (s == 0) {
        if ((p->m8ac & 0x10) || p->m858 == 1 || p->m852 == p->m904) {
            if (p->m852 == p->m854) p->request(p->m855, -1);
            bump(p);
        } else {
            if (func_0051D2F4(&p->m3e8, (s32)p->m818, 0.1f, (s32)p->m938[0], (s32)p->m938[1])) {
                bump(p);
                p->request(p->m855, -1);
            }
        }
        return;
    }
    if (p->m988 != 1 && p->m988 != 2) return;
    func_004C1418(p, p->m988 == 1);
    func_004BDA28(p);
    func_004C01E4(p);
}
void bump(Npc* p) { p->m988 += 1; }

