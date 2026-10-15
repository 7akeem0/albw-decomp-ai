typedef unsigned int u32;
typedef unsigned char u8;

struct V3 { u32 a, b, c; };
struct Obj {
    char p0[0x30];
    V3* m30;
    char p1[0x13c - 0x34];
    u8 m13c;
    u32 m140;
    u32 m144;
    u32 m148;
};

extern "C" u32 func_005573B8(Obj* self, V3* out) {
    u32 c;
    if (self->m13c != 0) {
        out->a = self->m140;
        out->b = self->m144;
        c = self->m148;
    } else {
        V3* p = self->m30;
        out->a = p->a;
        out->b = p->b;
        c = p->c;
    }
    out->c = c;
    return 0;
}
