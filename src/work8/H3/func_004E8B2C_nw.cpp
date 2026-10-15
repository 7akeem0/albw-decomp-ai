// func_004E8B2C: self->m3dc = *func_00559B54(self);  (12-byte struct copy)
// if (func_00520EE4(self)) { func_0066AB60(self+0x4dc, 4); }
// else if (!func_00521064(self)) { func_0066AB60(self+0x4dc, 1); }

typedef unsigned int u32;

struct Vec3 {
    u32 a;
    u32 b;
    u32 c;
};

struct Self {
    char p0[0x3dc];
    Vec3 m3dc;
};

Vec3* func_00559B54(Self* self);
u32 func_00520EE4(Self* self);
u32 func_00521064(Self* self);
 void func_0066AB60(void* p, u32 v);

void func_004E8B2C(Self* self) {
    Vec3* d = &self->m3dc;
    Vec3* src = func_00559B54(self);
    *d = *src;
    if (func_00520EE4(self) != 0) {
        func_0066AB60((char*)self + 0x4dc, 4);
    } else if (func_00521064(self) == 0) {
        func_0066AB60((char*)self + 0x4dc, 1);
    }
}
