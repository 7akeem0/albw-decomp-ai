typedef unsigned int u32;
typedef int s32;
typedef unsigned char u8;

extern void* data_00714248;
extern void* data_00712468;
s32 func_005473E0(void* o);
s32 func_005473F8(void* o);
__attribute__((weak)) void func_0066777C(void* o, u32 n);
void func_0014ABEC(void* o);

extern "C" void func_0037B254(u8* self) {
    if (func_005473E0(data_00714248)) {
        if (func_005473F8(data_00714248) == 0) func_0066777C(self + 0xc0, 4);
        else if (func_005473F8(data_00714248) == 1) return func_0014ABEC(data_00712468);
    }
}
