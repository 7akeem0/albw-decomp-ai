typedef unsigned char u8;
typedef unsigned int u32;
typedef int s32;

struct Tail { u8 pad[0xb0]; u32 mb0; };
struct Glob { u8 pad[0x12c]; Tail* m12c; };

struct Obj {
    u8 pad0[0x10];
    s32 m10;
    u8 m14;
    u8 m15;
    u8 m16;
    u8 m17;
    u8 pad18[0x34 - 0x18];
    s32 m34;
    u8 m38[0x10];
};

extern u8* data_00712468;
extern void* data_00709F30;

extern "C" void func_00104914();
extern "C" bool func_00104F68();
extern "C" void func_00104A2C(bool v);
extern "C" void func_0010A7BC(void* p);
extern "C" void func_004C76D4(void* v);

extern "C" void func_002DF2B4(Obj* self) {
    switch (self->m10) {
    case 0:
        break;
    case 1: {
        if (!func_00104F68()) {
            self->m10 = 3;
            break;
        }
        u8 b = self->m14;
        if (b == 0) b = self->m16;
        if (b != 0) {
            self->m34 = 0xf;
            break;
        }
        Glob* g = (Glob*)(data_00712468 + 0x1000);
        Tail* x = g->m12c;
        u32 q = x ? x->mb0 : 0;
        if (q != 0) {
            self->m34 = 0xf;
            break;
        }
        if (self->m34 > 0) {
            self->m34--;
            break;
        }
        if (self->m15 == 0 && self->m17 != 0) {
            func_00104A2C(1);
            func_0010A7BC(self->m38);
            self->m10 = 2;
            break;
        }
        func_00104914();
        self->m10 = 0;
        if (func_00104F68())
            func_00104A2C(0);
        break;
    }
    case 2:
        self->m10 = 3;
        break;
    case 3:
        func_00104914();
        self->m10 = 0;
        if (data_00709F30 != 0)
            func_004C76D4(data_00709F30);
        break;
    }
}
