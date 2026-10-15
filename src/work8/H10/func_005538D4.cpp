typedef unsigned int u32;
typedef int s32;
typedef signed char s8;

struct V3 { u32 a, b, c; };
struct Obj { char p0[0x30]; V3* m30; };

u32 func_005467C0(Obj* self, V3* out);
extern char* data_00709DF8[];

extern "C" u32 func_005538D4(Obj* self, V3* out) {
    s32 k = *(s8*)((char*)data_00709DF8[0] + 0x18);
    if (k == 7 || k == 0x25) {
        return func_005467C0(self, out);
    }
    V3* p = self->m30;
    out->a = p->a;
    out->b = p->b;
    out->c = p->c;
    return 5;
}
