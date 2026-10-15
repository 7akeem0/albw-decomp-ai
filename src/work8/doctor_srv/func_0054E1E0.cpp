typedef unsigned int u32;
typedef float f32;

struct Vec3 { f32 x, y, z; };
struct Obj {
    void* vt;
    char p0[0x368 - 4];
    Vec3 m368;
};

void func_00115C70(Vec3* out, Vec3* a, Vec3* b);

extern "C" void func_0054E1E0(Obj* self, Vec3* out) {
    out->x = 0.0f;
    out->y = 0.0f;
    out->z = 0.0f;
    void** vt = (void**)self->vt;
    Vec3* p = ((Vec3* (*)(Obj*))vt[0x78 / 4])(self);
    Vec3 * out_c1 = out;
    func_00115C70(out_c1, p, &self->m368);
}
