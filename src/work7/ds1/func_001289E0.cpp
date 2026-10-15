// 0x1289E0: actor lookup then delegate.
typedef unsigned int u32;
typedef unsigned char u8;
typedef signed char s8;
typedef int s32;

extern void* data_00706E20;
extern u32   ro_00693418;
extern "C" void* func_0052FBA0(void*, u32);
extern "C" s32   func_00588BE4(void*);
extern "C" void  func_006568D8(void*, u32);
extern "C" u32   func_004F7A60(void*, void*);

struct S { char pad[0x28]; u32 m28; };

u32 f(void* self, S* a1) {
    void* mgr = data_00706E20;
    void* a = func_0052FBA0((u8*)mgr + 0x3dbbc, a1->m28);
    if (a != 0) {
        if (func_00588BE4(a) == (s32)ro_00693418) {
            s8 v = *(s8*)((u8*)self + 0x8c0);
            if (v == 1 || v == 8)
                func_006568D8((u8*)self + 0x8bc, 2);
            return 0;
        }
    }
    return func_004F7A60(self, a1);
}
