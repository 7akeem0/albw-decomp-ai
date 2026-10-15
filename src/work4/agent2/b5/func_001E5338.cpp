// 0x1E5338: virtual forwarder to func_0014DF18(m2d0, b, c, d, 0, 0); first explicit arg unused
typedef signed int s32;
struct Res2D0;
s32 func_0014DF18(Res2D0* r, s32 b, s32 c, s32 d, s32 e, s32 f);
struct Obj1E5338 {
    virtual s32 f(s32 a, s32 b, s32 c, s32 d);
    char pad[0x2d0 - 4];
    Res2D0* m2d0;
};
s32 Obj1E5338::f(s32 a, s32 b, s32 c, s32 d) { return func_0014DF18(m2d0, b, c, d, 0, 0); }
