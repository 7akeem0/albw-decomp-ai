typedef unsigned int u32;
typedef int s32;
typedef unsigned char u8;

extern "C" bool func_00547B20(void*);
extern "C" void func_003521F0(void*, s32);
extern "C" char ro_vt5988;

struct SafeString {
    virtual void assureTermination() const;
    const char* text;
    SafeString(const char* s) : text(s) {}
};

struct Npc {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(SafeString*);
    virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27();
    virtual void v28();

    u8 pad0[0x24 - 4];
    u32 m24;                 // 0x24
    u8 pad28[0x2e0 - 0x28];
    u32 field2e0;            // 0x2e0
    u8 pad2e4[0x324 - 0x2e4];
    u8 m324[0x818 - 0x324];
    u32 m818;                // 0x818
    u8 pad81c[0x853 - 0x81c];
    u8 id853;                // 0x853
    u8 pad854;
    u8 id855;                // 0x855
    u8 pad856[0x85f - 0x856];
    u8 gate85f;              // 0x85f
    u8 pad860[0x8b0 - 0x860];
    u8 flag8b0;              // 0x8b0

    void finishV(u8 v) {
        m818 = m24;
        gate85f = 1;
        id853 = v;
        id855 = v;
    }
};

inline void setBit2(u32& x) { x |= 2; }

void target(Npc* p, s32 arg) {
    if (!func_00547B20((u8*)p + 4)) return;
    func_003521F0(p->m324, arg);
    p->v28();
    setBit2(p->field2e0);
    p->v23(&SafeString("pose:pose_loop"));
    if (arg != 0) return;
    p->finishV(p->flag8b0);
}
