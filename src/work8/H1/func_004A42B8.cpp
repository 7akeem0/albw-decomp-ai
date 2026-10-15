typedef unsigned int u32;
typedef unsigned char u8;

class Obj4A42B8 {
public:
    virtual void vf0();
    virtual void vf1();
    virtual void vf2();
    u8 p[0x84 - 4];
    u8 b84;
};

void func_0066F684(u8* p, u32 v);
void func_00231524(u8* p);
void func_002313DC(u8* p);
void func_00231448(u8* p);

extern "C" void func_004A42B8(Obj4A42B8* self, u32 flag) {
    u8* s = (u8*)self;
    if (flag) {
        func_0066F684(s + 0x20, 2);
        func_00231524(s + 0x44);
        func_002313DC(s + 0x50);
    } else {
        func_0066F684(s + 0x20, 0);
        func_002313DC(s + 0x44);
        func_00231448(s + 0x50);
    }
    self->b84 = (u8)flag;
    self->vf2();
    func_00231448(s + 0x44);
}
