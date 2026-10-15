typedef unsigned char u8;
typedef unsigned int u32;
struct Mgr70FB60;
extern Mgr70FB60* data_0070FB60;
bool func_0053FA48(Mgr70FB60* m);
bool func_00292010(Mgr70FB60* m, void* p, u32 v);
struct Cls7798 {
    virtual void vf0();
    char pad4[0xacc - 4];
    char macc[0xad8 - 0xacc];
    u32 mad8;
    u8 madc;
    bool func_001E7798(int a);
};
bool Cls7798::func_001E7798(int a) {
    Cls7798* self = this;
    if (a)
        return true;
    Mgr70FB60* m = data_0070FB60;
    if (self->madc)
        return func_0053FA48(m);
    self->madc = func_00292010(m, self->macc, self->mad8);
    return false;
}
