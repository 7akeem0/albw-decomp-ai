
typedef unsigned int u32;
typedef unsigned char u8;

extern void* data_00706E20;
extern "C" u32  func_00588BF0(void*, u32);
extern "C" void* func_0052FBDC(void*, u32, u32);
extern "C" void func_006576C4(void*, u32);

void f(void* self) {
    if (func_00588BF0(self, 0) == 0)
        return;
    if (func_00588BF0(self, 1) != 0)
        return;
    u32 id = *(u32*)((u8*)self + 0x4c0); void* a = func_0052FBDC((u8*)data_00706E20 + 0x3dbbc, id, 0);
    __schedule_barrier();
    u8* q = (u8*)self + 0x424;
    if (a == 0)
        func_006576C4(q, 1);
    u32 hi = *(u32*)((u8*)self + 0x494);
    u32 lo = *(u32*)((u8*)self + 0x490);
    if (lo < hi)
        *(u32*)((u8*)self + 0x490) = lo + 1;
    else
        func_006576C4(q, 1); __schedule_barrier();
}
