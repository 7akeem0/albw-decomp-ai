typedef unsigned int u32;
typedef unsigned short u16;
extern char ro_00693124[];
extern char data_00706E20[];
extern char data_0070C8E0[];
struct V3 { u32 x, y, z; };
struct SpawnParam;
struct Handle { u32 id; };
extern void func_002DFF7C(SpawnParam*);
extern u32 func_0019B04C(u32);
extern u32 func_00581D60(u32, u32, u32, V3*);
extern void func_004C4AF4(u32, SpawnParam*, u32);
struct SpawnParam {
    SpawnParam() : m1c(0), m20(0), m24(0), m48(0), m4c(0), m2c0(0) { func_002DFF7C(this); }
    void setM20(u32 v);
    u32 m0;
    V3 pos;
    u32 m10[3];
    u32 m1c, m20, m24;
    u32 m28[7];
    float m44;
    u32 m48, m4c;
    u16 m50;
    u16 m52;
    u32 m54[(0x2c0 - 0x54) / 4];
    u32 m2c0;
};
void SpawnParam::setM20(u32 v) { m20 = v; }
void func_0014921C(u32 a0, const V3* a1, Handle a2, u32 a3)
{
    SpawnParam p;
    p.m0 = func_0019B04C(*(u32*)ro_00693124);
    p.pos = *a1;
    p.setM20(a2.id);
    p.m50 = func_00581D60(*(u32*)data_0070C8E0, p.pos.y, p.pos.z, &p.pos);
    p.m44 = a3 != 0 ? 1.0f : 0.0f;
    p.m4c = a0;
    func_004C4AF4(*(u32*)data_00706E20, &p, 0);
}
