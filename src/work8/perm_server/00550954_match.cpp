typedef unsigned int u32;
typedef float f32;

struct Sub8c { char p0[0x154]; f32 m154; };
struct Obj { char p0[0x8c]; Sub8c* m8c; char p1[0xb0 - 0x90]; unsigned char mb0; };

bool func_005234B8(Obj* a);

extern "C" bool func_00550954(Obj* self) {
    if (func_005234B8(self) != 0) {
        if (self->mb0 == 0) {
            f32 v = self->m8c->m154; __schedule_barrier();
            if (v > 0.0f) return 1;
        }
    }
    return 0;
}
