typedef unsigned char u8;
typedef signed char s8;
typedef int s32;
typedef unsigned int u32;

struct SafeString {
    SafeString(const char* s) : mStr(s) {}
    virtual void assure() const;
    const char* mStr;
};
struct EvInfo { s8 kind; char pad[3]; u32 id; };
struct GEv { char _0[0x18]; EvInfo info; };
extern GEv* data_00709DF8;
extern void* data_0070C8E0;

void* func_0010B954(u32 size, const SafeString& name, void* parent, s32 a, s32 b);
void* func_00582260(void* mgr, s32 k, u32 v);
void func_00689894(void* dst, const void* src, s32 len);

struct Obj {
    char _0[0x20];
    void* m20;
    void* m24;
    char _28[0x68 - 0x28];
    char m68[0x2000 - 0x68];
    char m2000[0x23c4 - 0x2000];
    u8 m23c4;
    char _23c5[0x23fc - 0x23c5];
    u32 m23fc;
    void func_004B759C();
    void func_004B79BC();
    void f();
};

void Obj::f() {
    m23c4 = 2;
    if (data_00709DF8 != 0) {
        if (data_00709DF8->info.kind == 8 || data_00709DF8->info.kind == 0x26) {
            if (m20 == 0) m20 = func_0010B954(0x10800, SafeString("DemoCommandHeap"), 0, 1, 0);
            if (m24 == 0) m24 = func_0010B954(0x460, SafeString("DemoWaitCommandHeap"), 0, 1, 0);
            func_004B759C();
            EvInfo& info = data_00709DF8->info;
            void* s = func_00582260(data_0070C8E0, info.kind, info.id);
            func_00689894(m68, (char*)s + 4, -1);
            if (info.kind == 8) m23fc = info.id;
            func_004B79BC();
            m23c4 = 0;
        }
    }
}
