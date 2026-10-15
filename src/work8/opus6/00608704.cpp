typedef unsigned int u32;
typedef unsigned char u8;
struct NoThrow {};
void* operator new(unsigned int, NoThrow);
inline void* operator new(unsigned int, void* p) { return p; }

extern char data_0070E7B4[];
extern char bss_0077D270[];

struct SV { virtual void s0(); };
struct PV {
    PV(void* a, int b, void* c, int d);   // 0x339CC4
    virtual void a0(); virtual void a1(); virtual void a2(); virtual void a3(); virtual void a4(); virtual void a5(); virtual void a6(); virtual void a7(); virtual void a8(); virtual void a9(); virtual void a10(); virtual void a11(); virtual void a12(); virtual void a13(); virtual void a14(); virtual void a15(); virtual void a16(); virtual void a17(); virtual void a18(); virtual void a19(); virtual void a20(); virtual void a21(); virtual void a22(); virtual void a23(); virtual void a24(); virtual void a25(); virtual void a26(); virtual void a27(); virtual void a28(); virtual void a29(); virtual void a30(); virtual void a31(); virtual void a32(); virtual void a33(); virtual void a34(); virtual void a35(); virtual void a36(); virtual void a37(); virtual void a38(); virtual void a39(); virtual void a40(); virtual void a41(); virtual void a42(); virtual void a43(); 
    char pad[0x31c];
};
struct D;
struct Z { u32 v; Z() : v(0) {} };
int func_00588BF0(D* p, int a);
void func_004BD280(D* p, int a, int b);
void func_00169A80(void* a);
void func_00168E9C(void* a, void* b, int c);
void func_004C03B8(D* p, void* q);

struct D : PV, SV {
    char pad2[0x7a0 - 0x324];
    void* m7a0;
    char pad3[0x7ac - 0x7a4];
    void* m7ac;
    char pad4[0x853 - 0x7b0];
    u8 m853;
    u8 m854;
    u8 m855;
    char pad6[0x98c - 0x856];
    Z m98c;
    u32 m990;
    D(void* a) : PV(a, 6, data_0070E7B4, -1) {
        if (func_00588BF0(this, 0) != 0 && func_00588BF0(this, 1) == 0) {
            m853 = 4;
            m855 = 5;
            func_004BD280(this, 4, 0);
            func_00169A80(m7ac);
            func_00168E9C(m7ac, m7a0, 0);
        }
        func_004C03B8(this, bss_0077D270);
    }
    virtual void a0();
};

D* func_00608704(void* a) {
    D* p = (D*)::operator new(0x994, NoThrow());
    if (!p) return 0;
    return new (p) D(a);
}
