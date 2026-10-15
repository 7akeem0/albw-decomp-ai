typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32;

struct Blk50 { char pad0[0x50]; };
struct Obj { char pad0[0x4c]; void* m4c; void* m50; };

void func_00689024(Blk50* p);
s32 func_00539024(void* p, Blk50* b);
s32 func_00540A78(void* p, Blk50* b);
void func_00296BD0(void* p, u32 k);
void func_00296D28(void* p, Blk50* b);
void func_004E9D34dummy(void* p, Blk50* b);

void func_004E9CD4(Obj* self) {
    Blk50 tmp;
    func_00689024(&tmp);
    if (func_00539024(self->m50, &tmp) != 0) {
        if (func_00540A78(self->m4c, &tmp) == 0) {
            func_00296BD0(self->m4c, 0xf);
            func_00296D28(self->m4c, &tmp);
            func_004E9D34dummy(self->m50, &tmp);
        }
    }
}
