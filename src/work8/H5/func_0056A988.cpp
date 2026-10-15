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

extern const Ent ro_006BF4EC[];

extern "C" void func_0056A988(void* p0, void* p1, Ent* out, float x) {
    s32 i = (s32)(x * 96.0f);
    if (i > 96) i = 96;
    else if (i < 0) i = 0;
    const Ent* e = &ro_006BF4EC[i];
    out->a = e->a;
    out->b = e->b;
    out->c = e->c;
}
