typedef unsigned int u32;
typedef int s32;
typedef unsigned char u8;

class Base376 {
public:
    virtual void vf0();
    u8 p[0x394 - 4];
    s32 m394;
};
typedef void (Base376::*PMF376)();

struct Cls376 {
    u8 p0[0x10c];
    Base376* m10c;
    void* m110;
    void* m114;
    u8 p1[0x11c - 0x118];
    PMF376 m11c;
};

void func_00376774(void* p, s32 flag);

extern "C" void func_00376708(Cls376* self) {
    (self->m10c->*self->m11c)();
    func_00376774(self->m110, self->m10c->m394 > -1);
    return func_00376774(self->m114, self->m10c->m394 < 0x2e);
}
