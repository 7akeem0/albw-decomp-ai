typedef unsigned int u32;
typedef unsigned short u16;
typedef int s32;

#pragma pack(push, 2)
struct Ent {
    u32 a;
    u32 b;
    u16 c;
};
#pragma pack(pop)

extern const Ent ro_006BF08C[];

extern "C" void func_0056A9DC(void* p0, void* p1, Ent* out, float x) {
    s32 i = (s32)(x * 111.0f);
    if (i > 111) i = 111;
    else if (i < 0) i = 0;
    const Ent* e = &ro_006BF08C[i];
    out->a = e->a;
    out->b = e->b;
    out->c = e->c;
}
