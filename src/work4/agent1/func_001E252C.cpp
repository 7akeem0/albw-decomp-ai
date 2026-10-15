typedef unsigned char u8; typedef signed char s8; typedef unsigned int u32; typedef signed int s32;
struct ListNode;
struct Obj25D;
ListNode* func_0049F688(void* list);
void func_0025D4F4(Obj25D* o);
struct OffsetList {
    u32 m0, m4, m8;
    s32 mOffset;
    Obj25D* front() { ListNode* n = func_0049F688(this); if (!n) return 0; return (Obj25D*)((char*)n - mOffset); }
};
struct X252C { char pad[0x20]; OffsetList m20; void f(); };
void X252C::f() {
    while (Obj25D* o = m20.front())
        func_0025D4F4(o);
}
