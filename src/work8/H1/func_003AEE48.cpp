typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;

struct Sub900 {
    u8 p[0x38];
    u16 m38;
};
struct Obj3AEE48 {
    u8 p0[0x2d7];
    u8 m2d7;
    u8 p1[0x900 - 0x2d8];
    Sub900 m900;
    u8 p2[0x93b - 0x93a];
    u8 m93b;
};
void func_003AECF0(Obj3AEE48* self);
void func_00588C14(Obj3AEE48* self, u32 a, u32 b);
void func_003AEB00(Obj3AEE48* self);
void func_003AEBF8(Obj3AEE48* self);

extern "C" void func_003AEE48(Obj3AEE48* self) {
    func_003AECF0(self);
    u8 flag = self->m93b;
    Sub900& q = self->m900;
    if (flag) {
        func_00588C14(self, 0, 1);
        self->m2d7 = 1;
    }
    u16 v = q.m38;
    if (v == 0) return func_003AEBF8(self);
    if (v == 1) return func_003AEB00(self);
}
