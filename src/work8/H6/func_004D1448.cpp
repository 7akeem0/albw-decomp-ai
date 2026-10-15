// 0x4D1448: S = this+0x200; prev = (s8)S->d7; f4ECDE8(this); if ((u8)S->d7 == 0 || prev != 0) return;
//           if (!this->m560 || this->m564) return; g = *gData; p = g+0x7708; if (*p != this->m560) return; *p = 0; tail f4AD5F0(g, 0)
typedef unsigned int u32;
typedef unsigned char u8;
typedef signed char s8;

extern u8* gData117;   // data_0070C8E0

void func_004ECDE8(void* self);
void func_004AD5F0(u8* g, u32 v);

struct Self117 {
    u8 pad0[0x2d7];
    s8 m2d7;
    u8 pad1[0x560 - 0x2d8];
    u32 m560;
    u8 m564;
};

void func_004D1448(Self117* self)
{
    s8 prev = self->m2d7;
    func_004ECDE8(self);
    if ((u8)self->m2d7 == 0)
        return;
    if (prev != 0)
        return;
    u32 v = self->m560;
    if (v == 0)
        return;
    if (self->m564 != 0)
        return;
    u8* g = gData117;
    u32* p = (u32*)(g + 0x7708);
    if (*p != v)
        return;
    *p = 0;
    func_004AD5F0(g, 0);
}
