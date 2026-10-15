// 0x556BD4: Tmp t; f4D80A4(&t, *(u32*)this->m24, 1.0f); t.f4 = 0.0f; a = f584DF8(this->m10->m600);
//           b = f584D0C(this->m10->m600); f51E84C(*gData, &t, b, a);
typedef unsigned int u32;
typedef unsigned char u8;

extern u8* gData118;   // data_0070B960

struct Tmp118 {
    u32 w0;
    float f4;
    u32 w8;
    u32 wc;
};

struct Holder118 {
    u8 pad0[0x600];
    u8* m600;
};

struct Self118 {
    u8 pad0[0x10];
    Holder118* m10;
    u8 pad1[0x24 - 0x14];
    u8* m24;
};

void func_004D80A4(Tmp118* t, u32 w, float s);
float func_00584DF8(u8* q);
float func_00584D0C(u8* q);
void func_0051E84C(u8* g, Tmp118* t, float a, float b);

void func_00556BD4(Self118* self)
{
    Tmp118 t;
    func_004D80A4(&t, *(u32*)self->m24, 1.0f);
    t.f4 = 0.0f;
    float a = func_00584DF8(self->m10->m600);
    float b = func_00584D0C(self->m10->m600);
    func_0051E84C(gData118, &t, b, a);
}
