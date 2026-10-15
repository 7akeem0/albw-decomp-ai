typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16; typedef unsigned int u32; typedef int s32; typedef float f32;
extern u8 ro_006DAA14[];
extern u8 ro_006F54BC[];
typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16; typedef unsigned int u32; typedef int s32; typedef float f32;
extern "C" void func_0010F1F8(void*);
extern "C" void* func_004A1520(void*);
extern "C" void func_0048D1B0(void*);
void func_0029D990(char* self) {
    char* sub = self + 0xfc;
    *(void**)self = (void*)ro_006DAA14;
    *(void**)(self + 0xfc) = (void*)ro_006F54BC;
    if (*(u8*)(sub + 0x38)) {
        char* node = sub + 0x10;
        char* p = *(char**)(sub + 0x1c);
        if (p) {
            *(void**)(node + 0xc) = 0;
            func_0010F1F8(node);
            *(u32*)(p + 8) -= 1;
        }
        *(u8*)(sub + 0x38) = 0;
    }
    func_0048D1B0((char*)func_004A1520(sub) - 0xfc);
}
