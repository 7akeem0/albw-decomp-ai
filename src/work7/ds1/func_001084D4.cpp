typedef unsigned char u8;
typedef unsigned int u32;

extern "C" int func_0010A9FC(void*);
extern "C" int data_0071678C;
extern "C" int data_00725818;
extern "C" void* data_00716798;
extern "C" void* data_0072581C;
extern "C" void* ro_006BDFFC;

void func_001084D4() {
    if (data_0071678C > 0) data_0071678C--;
    if (data_0071678C != 0) return;
    int r = func_0010A9FC(&data_00725818);
    r &= (int)0x80000000;
    if (r < 0) return;
    void* v = ro_006BDFFC;
    data_00716798 = v;
    data_0072581C = v;
}
