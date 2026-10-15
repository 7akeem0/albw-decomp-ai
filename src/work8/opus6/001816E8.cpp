typedef unsigned char u8;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

struct Req {
    u8 m0;
    u8 pad1[3];
    u32 m4;
    u16 m8;
    u8 ma;
};
struct Mgr709DF8;
extern Mgr709DF8* data_00709DF8;
struct G708D34 { char pad[0x2a]; u16 m2a; };
extern G708D34 data_00708D34;
bool func_004EF418(Mgr709DF8* m, Req* r, s32 a, s32 b);
void func_00165E28(void* p, u16 v);
struct StateMgr { void changeState(s32 s); };   // 0x659400

struct Obj {
    char pad[0x960];
    StateMgr m960;
    char pad961[0xba0 - 0x961];
    u32 mba0;
    char padba4[0xbe4 - 0xba4];
    void* mbe4;
    s32 mbe8;
    u8 mbec;
    u8 mbed;
    u8 mbee;
    u8 pbef[4];
    u8 mbf3;
    void func_001E6AB4();
    bool func_00181538();
    void func_004BDB20();
    void f();
};

void Obj::f() {
    func_001E6AB4();
    if (mbe8 == 1) {
        if (func_00181538()) {
            mbe8 = 2;
            m960.changeState(6);
        } else {
            mbe8 = 0;
            mba0 = 0;
        }
    }
    if (mbe8 == 3) {
        Req req;
        req.m0 = 0x10;
        req.m8 = 0xf;
        req.ma = 1;
        req.m4 = 0;
        if (func_004EF418(data_00709DF8, &req, 2, 0)) {
            func_00165E28(mbe4, data_00708D34.m2a);
            mbee = 0;
            mbe8 = 4;
            mba0 = 0;
        }
    }
    if (mbf3) {
        mbf3 = 0;
        func_004BDB20();
    }
}
