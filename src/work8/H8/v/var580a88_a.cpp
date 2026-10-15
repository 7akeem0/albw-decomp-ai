typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct Iface {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4(f32 a, f32 b, f32 c, f32 d);
};

extern void* data_00715148;
extern Iface* data_00715160;
void func_00580AE8(void* self, f32* out, void* g);
void func_00580C50(void* self, f32* out, void* g);

void func_00580A88(void* self) {
    void* g = data_00715148;
    if (g) {
        void* s = self;
        f32 v[4];
        func_00580AE8(s, v, g);
        func_00580C50(s, v + 2, g);
        data_00715160->v4(v[0], v[1], v[2], v[3]);
    }
}
