typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;

struct PairF { float v[2]; PairF(){} PairF(float a,float b){v[0]=a;v[1]=b;} void set(float a,float b){v[0]=a;v[1]=b;} };
inline void copyPairR(const PairF& v, PairF* out) { *out = v; }
struct Tail17C { u8 a, b; u16 c, d; u8 pad[2]; };
inline void copyPair(PairF v, PairF* out) { *out = v; }
inline void clearTail(Tail17C* out, u8 ff) { out->a = ff; out->b = ff; out->c = 0; out->d = 0; }
extern const float ro_006C04C0;
struct Settings { u8 pad[2]; volatile u8 state; };
extern Settings bss_007A3AA8;
void func_0040E2D0(void*, float);
void func_0040FA80(void*);

struct Object {
    u8 pad0[0x78];
    u32 m78;
    u8 m7c;
    u8 pad7d[0x90 - 0x7d];
    u8 sub90[0x10];
    u8 padA0[0xAC - 0xA0];
    u8 elems[4][0x20];
    u8 states[4];
    u8 m130;
    u8 pad131[2];
    u8 m133;
    u8 m134;
    u8 m135;
    u8 m136;
    u8 pad137[1];
    float m138;
    float m13c;
    float m140;
    float m144;
    float m148;
    float m14c;
    float m150;
    float m154;
    float m158;
    float m15c;
    float m160;
    u32 m164;
    u32 m168;
    float m16c;
    float m170;
    PairF m174;
    Tail17C m17c;
    PairF m184;
    u32 m18c;
    u8 m190;
    u8 m191;
    u8 m192;
    u8 m193;
    u8 m194;
    u8 m195;
    u8 pad196[2];
    u32 m198;
    u32 m19c;
    u32 m1a0;
    u32 m1a4;
};

template<class T0> inline u8 hlp0(T0 self) { self->m194 = 0; return bss_007A3AA8.state; }
void func_0041D3F8(Object* self, u32 a, u32 b) {
    u32 zero = 0;
    unsigned int one = 1;
    u32 value3c = 0x3c;
    self->m1a4 = zero;
    self->m198 = a;
    self->m19c = b;
    self->m130 = 0;
    self->m133 = one;
    self->m134 = 0;
    self->m135 = 0;
    self->m7c = 0;
    self->m78 = zero;
    self->m18c = zero;
    self->m192 = value3c;
    self->m193 = value3c;
    self->m16c = 1.0f;
    self->m170 = 0.0f;
    self->m174.set(0.0f,1.0f);
    self->m184.set(0.0f,1.0f);
    self->m138 = 1.0f;
    self->m15c = 0.0f;
    self->m13c = 1.0f;
    self->m140 = 0.0f;
    self->m144 = 0.0f;
    self->m148 = 0.0f;
    self->m136 = 0;
    self->m14c = 0.0f;
    self->m150 = 0.0f;
    self->m154 = 0.0f;
    self->m158 = 0.0f;
    clearTail(&self->m17c, 0xff);
    self->m160 = 0.0f;
    self->m168 = zero;
    self->m164 = zero;
    float q = ro_006C04C0;
    func_0040E2D0(self->sub90, q);
    for (int i = 0; i < 4; ++i) {
        func_0040FA80(self->elems[i]);
        self->states[i] = 0;
    }
    self->m190 = 0;
    self->m191 = 0;
    u8 x = hlp0(self); 
    u8 value = 0;
    if (!x) value = 2;
    else if (x == 1) value = 1;
    self->m195 = value;
}
