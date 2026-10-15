typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct Node;
struct Arr3 {
    Node* m[3];
    Node*& operator[](s32 i) { if ((u32)i < 3) return m[i]; return m[0]; }
};
struct Owner { char pad0[0xa4]; Arr3 a4; };

s32 func_00574B9C(Node* n);

u32 func_0058E048(Owner* self) {
    for (s32 i = 0; i < 3; ++i) {
        if (self->a4[i] != 0) {
            if (func_00574B9C(self->a4[i]) != 0) return 1;
        }
    }
    return 0;
}
