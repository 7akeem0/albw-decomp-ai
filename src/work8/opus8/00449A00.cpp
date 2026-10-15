typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32;
struct Item {
    char pad[0xd]; u8 b0d; u8 b0e; char pad0f[0x6c - 0xf]; u8 b6c;
    bool isIdle() const { return b0d == 0 && b0e == 0; }
    bool isDone() const { return b0d == 3 && b0e == 3; }
};
template <class T> struct PtrArray {
    s32 mSize; s32 mCap; T** mPtrs;
    T* at(s32 i) const { if ((u32)i < (u32)mSize) return mPtrs[i]; return 0; }
};
struct Elem38 { char pad[0x35]; u8 b35; char pad36[2]; };
template <class T> struct Buffer {
    s32 mSize; T* mBuffer;
    T& operator()(s32 i) const { if ((u32)i < (u32)mSize) return mBuffer[i]; return mBuffer[0]; }
};
struct Res { char pad[8]; Buffer<Elem38> buf; };
void func_0012C718(Item* it);
void func_0046A1D4(Item* it, s32 n);
struct Obj104 { s32 func_00532C78(); };
struct Obj158 { void func_0066CC58(s32 n); };
struct Menu {
    char pad0[0x1c]; Res* m1c;
    char pad20[0xca - 0x20]; s16 hca;
    char padcc[0x104 - 0xcc]; Obj104 m104;
    char pad105[0x158 - 0x105]; Obj158 m158; char pad159[4]; u8 b15d;
    char pad15e[0x1ac - 0x15e]; PtrArray<Item> m1ac;
    char pad1b8[0x214 - 0x1b8]; Item* m214;
    char pad218[0x295 - 0x218]; u8 b295;
    void update();
};

void Menu::update()
{
    bool ok = true;
    for (s32 i = 0; i < 20; i++) {
        if (!m1ac.at(i)->isIdle() && m1ac.at(i)->b6c) {
            ok = false;
            break;
        }
    }
    if (m214->isDone()) {
        func_0012C718(m214);
        func_0046A1D4(m214, 0);
    }
    if (m104.func_00532C78() == 0) {
        if (b15d == 2) {
            s16 idx = hca;
            Res* r = m1c;
            if (idx >= 0 && r->buf(idx).b35) goto end;
        }
        if (m214->isIdle()) { if (ok) m158.func_0066CC58(5); }
    }
end:
    b295 = 1;
}
