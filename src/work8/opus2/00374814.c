typedef unsigned char u8; typedef unsigned int u32; typedef int s32;
typedef struct Obj { u8 pad[0x9d0]; u8 m9d0; } Obj;
extern void* data_0070FB60;
int func_004BF7DC(void);
int func_004C0C80(void);
u8 func_005568A4(void*);
u8 func_005568B0(void*);
u32 func_0055696C(void*, u32);
_Bool func_00653B60(Obj*, _Bool);

int func_00374814(Obj* self, u32 a, u32 b, s32 mode)
{
    switch (self->m9d0) {
    case 0: case 1: case 2: case 3: case 4:
        switch (mode) {
        case 0:
            if (func_00653B60(self, 0)) goto fail;
            break;
        case 1: {
            void* g = data_0070FB60;
            if (g) {
                u8 x = func_005568B0(g);
                u8 y = func_005568A4(g);
                if (x == y) goto fail;
            }
            break;
        }
        }
        break;
    case 5: case 6:
        switch (mode) {
        case 0:
            if (func_0055696C(data_0070FB60, self->m9d0 != 5 ? 0x11 : 0x10) < 2) goto fail;
            break;
        case 2:
            if (func_00653B60(self, 0)) goto fail;
            break;
        }
        break;
    case 7: case 8: case 9:
        switch (mode) {
        case 0:
            if (func_004BF7DC() == 0) break;
        fail:
            return 0;
        case 1:
            if (func_004C0C80()) goto fail;
            break;
        case 2:
            if (func_00653B60(self, 0)) goto fail;
            break;
        }
        break;
    default:
        goto fail;
    }
    return 1;
}
