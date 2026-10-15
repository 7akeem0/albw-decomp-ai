typedef unsigned int u32;
typedef unsigned char u8;

u32 func_00600660(u32 k);
u32 func_0010BB14(u32 k);

extern "C" u32 ro_006F70B0[];
struct Obj499738 {
    Obj499738(u32 a);
    u32*vt;
    u8 m4;
    u32 m8;
    u32 mC;
    u32 m10;
    u32 m14;
    u32 m18;
    u32 m1c;
    u32 m20;void init(u32 a,u32 z,u32* v){m4=z;mC=z;m8=a;vt=v;}
};

Obj499738::Obj499738(u32 a) {
    init(a,0,ro_006F70B0);
    m10 = 0; m1c = 0;
    m20 = 0;
    mC = func_00600660(0x20000);
    m10 = func_00600660(0x30000);
    m14 = func_0010BB14(0x20000);
    m18 = func_0010BB14(0x30000);
}
