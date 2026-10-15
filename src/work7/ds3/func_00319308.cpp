#include "ds3.h"
extern "C" void func_004CF478(void*, int, int);
extern "C" void func_00292498(void*);
extern void* data_0070FB60;
void func_00319308(char* self) {
    char* r4 = self + 0x400;
    if (*(u16*)(r4 + 0xd2) != 0) {
        u16 v = *(u16*)(r4 + 0xd2) - 1;
        *(u16*)(r4 + 0xd2) = v;
        if (v == 0) func_004CF478(*(void**)(self + 0x410), 0, 0);
    }
    if (*(u16*)(r4 + 0xd4) != 0) {
        u16 v = *(u16*)(r4 + 0xd4) - 1;
        *(u16*)(r4 + 0xd4) = v;
        if (v == 0) func_00292498(data_0070FB60);
    }
    if (*(u16*)(r4 + 0xd2) == 0 && *(u16*)(r4 + 0xd4) == 0) {
        if (*(u16*)(r4 + 0xd6) != 0) *(u16*)(r4 + 0xd6) = *(u16*)(r4 + 0xd6) - 1;
    }
}
