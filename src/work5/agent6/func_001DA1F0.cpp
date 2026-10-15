typedef unsigned int u32; typedef int s32; typedef unsigned char u8; typedef signed char s8; typedef float f32; typedef short s16;
struct Mgr709D28;
extern Mgr709D28* data_00709D28;
struct Obj444 {};
struct Obj324 {};
void func_004A9120(Mgr709D28* m, Obj444* o);
void func_004A8BFC(Mgr709D28* m, Obj444* o, s32 k);
void func_003521F0(Obj324* o, u8 v);
struct Act1DA {
    virtual void vf0();
    void func_001DA1F0();
    char pad[0x2c - 4];
    s16 m2c;
    char pad2e[0x324 - 0x2e];
    Obj324 m324;
    char pad325[0x444 - 0x325];
    Obj444 m444;
    char pad445[0x476 - 0x445];
    s16 m476;
    char pad478[0x518 - 0x478];
    s16 m518;
    char pad51a;
    u8 m51b;
};
void Act1DA::func_001DA1F0() {
    func_004A9120(data_00709D28, &m444);
    func_004A8BFC(data_00709D28, &m444, 3);
    m476 = 0x900;
    m518 = 0x1200;
    s32 n = m2c > 0 ? m2c - 1 : 0;
    func_003521F0(&m324, n + 3);
    m51b = 1;
}
