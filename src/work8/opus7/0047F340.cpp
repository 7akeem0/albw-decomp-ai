typedef unsigned char u8; typedef unsigned short u16; typedef unsigned int u32; typedef int s32;
struct SafeString { virtual void assure() const; const char* mStr; SafeString(const char* s) : mStr(s) {} };
struct Pair { u32 a, b; };
struct Tbl { u8 pad[0x28]; Pair m28; Pair m30; };
extern "C" const Tbl ro_006A57DC;
struct Sub14 { u8 pad[0x16]; u16 m16; };
struct Node { u8 pad[0x14]; u32 m14; };
struct Obj;
void func_0012C718(Obj* o);
void func_00533078(Obj* o, const SafeString& s, s32 z);
s32 func_00559010(Node* n);
void func_004B96A0(Obj* o, u32 v);
__attribute__((weak)) void func_0066EB20(void* p, s32 v);
struct Obj {
    u8 pad[0x14]; Sub14* m14; u8 pad18[0x74 - 0x18]; u8 m74[4]; u8 pad78[0x110 - 0x78];
    Node* m110; Node* m114; Node* m118; Pair m11c;
    void f();
};
void Obj::f() {
    if ((m14->m16 & 4) == 0) {
        if (func_00559010(m110)) {
            m118 = m110;
            func_004B96A0(this, m114->m14);
            m11c = ro_006A57DC.m28;
            func_0066EB20(m74, 1);
            return;
        }
        if (func_00559010(m114)) {
            m118 = m114;
            func_004B96A0(this, m110->m14);
            m11c = ro_006A57DC.m30;
            func_0066EB20(m74, 1);
            return;
        }
    } else {
        func_0012C718(this);
        func_00533078(this, SafeString("SE_S_CANCEL"), 0);
    }
}
