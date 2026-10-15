typedef unsigned char u8;
typedef unsigned int u32;
typedef signed int s32;

extern "C" void func_0060B7D8(void*);
extern "C" u32 func_00583B1C(void*);
extern "C" void func_0060B6E8(void*, u32, u32);

struct VB {
    virtual void v00(); virtual void v01(); virtual void v02(); virtual void v03();
    virtual void v04(); virtual void v05(); virtual void v06(); virtual void v07();
    virtual void v08(); virtual void v09(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27();
    virtual void v28(); virtual void v29(); virtual void v30(); virtual void v31();
    virtual void v32(); virtual void v33(); virtual void v34(); virtual void v35();
    virtual void v36(); virtual void v37(); virtual void v38(); virtual void v39();
    virtual void v40(); virtual void v41(); virtual void v42(); virtual void v43(u32, s32);
};

struct S : VB {
    u8 pad0[0x852 - 4];
    u8 m852;
    u8 pad1[0x984 - 0x853];
    u32 m984;
    u8 pad2[0x989 - 0x988];
    u8 m989;
    void f();
};

void S::f() {
    func_0060B7D8(this);
    u8 st = m852;
    if (st == 1 || st == 5 || st == 7 || st == 0xd || st == 0xe || func_00583B1C(this) != 0) {
        v43(0, -1);
    }
    if (m989 == 3) return;
    func_0060B6E8(this, m984, 0);
}
