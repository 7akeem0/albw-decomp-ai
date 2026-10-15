typedef unsigned int u32;
typedef unsigned char u8;

struct Mgr32FE78;
extern Mgr32FE78* data_0070FB60;
u8 func_00255AB4(Mgr32FE78* m, u32 x);
void func_00230ADC(void* self);

struct Obj32FE78 {
    u8 p0[0x2f4];
    u8 m2f4;
    u8 p1[0x2f8 - 0x2f5];
    u32 m2f8;
    u32 m2fc;
    u8 m300;
};

struct Ptr6l{Obj32FE78*p;Ptr6l(Obj32FE78*v):p(v){}operator Obj32FE78*()const{return p;}};
void update6l(Ptr6l state){Obj32FE78*self=state.p;self->m2f8 = self->m2f8 + 1;
    switch (self->m2f4) {
        case 0:
        case 1:
        case 2:
        case 3:
            break;
        case 4:
            if (self->m300 == 0) self->m300 = func_00255AB4(data_0070FB60, self->m2fc);
            break;
        default:
            break;
    }
}
void func_0032FE78(Obj32FE78*self){update6l(Ptr6l(self));func_00230ADC(self);}
