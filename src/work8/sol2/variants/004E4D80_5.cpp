



typedef unsigned char u8;
typedef unsigned int u32;
typedef float f32;

struct Obj620 {
    char p0[0x58];
    f32 m58;
    char p1[0x60 - 0x5c];
    f32 m60;
    f32 m64;
};

struct Self {
    char p0[0x478];
    void* m478;
    char p1[0x4cc - 0x47c];
    void* m4cc;
    char p2[0x528 - 0x4d0];
    f32 m528;
    char p3[0x5a9 - 0x52c];
    u8 m5a9;
    char p4[0x60d - 0x5aa];
    u8 m60d;
    char p5[0x620 - 0x60e];
    Obj620* m620;
    char p6[0x671 - 0x624];
    u8 m671;
};

extern "C" void func_004CF478(void* o, u32 flag, u32 zero);
extern "C" void func_00151148(void* o, u32 flag);

static inline void setScale(Obj620* x,f32 f,f32 k){x->m64=f;x->m60=f*k;x->m58=f*k;}
void func_004E4D80(Self* self) {
    Obj620* x = self->m620;
    if (x != 0) {
        setScale(x,self->m528,2.0f);
    }
    func_004CF478(self->m478, 1, 0);
    func_00151148(self->m4cc, 1);
    self->m671 = 1;
    self->m5a9 = 0;
    self->m60d = 0;
}
