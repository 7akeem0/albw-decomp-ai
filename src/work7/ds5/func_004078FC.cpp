// 0x4078FC
int func_0040A7EC(void*, int, int, int, void*, int, int);

unsigned func_004078FC(void* self, int a1, int a2, int a3, char* a4) {
    if (!*(unsigned char*)((char*)self + 0x54)) return 0x10;
    signed char c = *a4;
    return func_0040A7EC(*(void**)((char*)self + 4), a1, a2, 0, self, c, a3) & 0xff;
}
