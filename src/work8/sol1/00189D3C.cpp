typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct Vec3 { f32 x, y, z; };
struct C {
    char pad0[0x4fc];
    char m4fc[4];
    s8 m500;
    bool f(s32 a1, const Vec3& v);
};
s32 func_001E4A5C(C* self, s32 a1, const Vec3* v);   
void func_00659544(void* p, s32 flag);               
bool C::f(s32 a1, const Vec3& v) {
    if (!func_001E4A5C(this, a1, &v))
        return false;
    s8 t = m500;
    if (t != 6 && t != 7) {
        void* q = m4fc;
        if(v.x==0.f && v.y==0.f && v.z==0.f)func_00659544(q,0);else func_00659544(q,2);
    }
    return true;
}

