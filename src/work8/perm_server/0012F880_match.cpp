typedef unsigned char u8;
typedef unsigned int u32;
typedef signed int s32;

extern "C" void func_0010C0B8(void*);
extern "C" void func_0010EEE0(void*);

void func_0012F880(u8* a0, u32 a1, int a2) {
    u8* la = a0 + 0x2bac;
    void* lk = 0;
    if (a2 != 0) {
        lk = la;
        func_0010C0B8(la); __schedule_barrier();
    }
    s32* st = (s32*)(a0 + 0x1870);
    if (st[0] < st[1]) {
        ((u32*)st[2])[st[0]] = a1;
        st[0] = st[0] + 1;
    }
    if (lk != 0) func_0010EEE0(lk);
}
