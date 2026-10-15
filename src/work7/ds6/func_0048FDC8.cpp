#include "ds6.h"

void* func_0048FE08(void* self, u32 a);

void* func_0048FDC8(void* self, u32 a) {
    switch (a) {
    case 0xb:
    case 0xc:
    case 0xd:
        return func_0048FE08(self, 6);
    case 0xe:
    case 0xf:
    case 0x10:
        return (char*)self + 0x15c;
    }
    return func_0048FE08(self, a);
}
