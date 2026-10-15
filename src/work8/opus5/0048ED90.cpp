typedef unsigned char u8;
typedef unsigned int u32;
typedef int s32;

struct Res;
struct Ctl {
    u8 pad[0x18];
    u32 m18;
};
bool func_00569F1C(void* p);
Res* func_00409F74(void* p, u32 id);
void func_00407AB8(Res* r, s32 v);
void func_0040C0CC(void* p);
struct Obj140;
void func_004957A8(Obj140* o, s32 v);
void func_004957DC(Obj140* o);
struct Obj12x;
void func_0058FA08(Obj12x* o);
struct Del { virtual ~Del(); };

struct Self {
    u8 pad0[4];
    u8 m4[0x18];
    u32 m1C;
    u8 pad20[0x120 - 0x20];
    Obj12x* m120;
    u8 pad124[4];
    Obj12x* m128;
    u8 pad12c[0x140 - 0x12c];
    Obj140* m140;
    Del* m144;
    void fini();
    void releaseAll(u32 type, s32 z) { u32 n = m1C; if (n == 0) return; u32 base = type << 24; for (u32 i = 0; i < n; i++) func_00407AB8(func_00409F74(m4, base + i), z); }
};

void Self::fini()
{
    if (!func_00569F1C(m4)) return;
    releaseAll(4, 0);
    func_004957A8(m140, 0);
    if (m144 != 0) {
        delete m144;
        m144 = 0;
    }
    func_0040C0CC(m4);
    func_0040C0CC(m4);
    if (m128 != 0) {
        func_0058FA08(m128);
        m128 = 0;
    }
    if (m120 != 0) {
        func_0058FA08(m120);
        m120 = 0;
    }
    func_004957DC(m140);
}


