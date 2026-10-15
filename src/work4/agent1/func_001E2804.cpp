typedef unsigned char u8; typedef signed char s8; typedef unsigned int u32; typedef signed int s32;
struct PlayerMgr { char pad[0x44]; void* m44; };
extern PlayerMgr* data_0070B728;
inline bool isSame(void* p, void* q) { return p != 0 && p == q; }
struct X2804 { char pad[0x2d7 - 4]; u8 m2d7; char pad2d8[0x7ac - 0x2d8]; char m7ac; virtual void vf(); };
void func_00588C14(X2804* x, int a, int b);
void X2804::vf() {
    void* q = &m7ac;
    if (!isSame(data_0070B728->m44, q)) {
        func_00588C14(this, 1, 1);
        m2d7 = 1;
    }
}
