typedef unsigned char u8;
typedef unsigned int u32;
typedef int s32;
typedef float f32;

struct Vec3 { f32 x, y, z; };
struct Mtx34 {
    f32 m[3][4];
};
void func_00491E80(Mtx34* m, s32 x, s32 y, s32 z);
void func_001157FC(Mtx34* out, const Mtx34* a, const Mtx34* b);

struct Model {
    u8 pad0[0x74];
    Vec3 mScale;
    Mtx34 mMtx;
    u8 padb0[0x164 - 0xb0];
    u32 mFlags;
    Mtx34& mtxW() { mFlags |= 0x40000000; return mMtx; }
    void setRot(const s32& x, const s32& y, s32 z) { mFlags |= 0x40000000; func_00491E80(&mMtx, x, y, z); }
    void setTrans(const Vec3& t) { mFlags |= 0x40000000; mMtx.m[0][3] = t.x; mMtx.m[1][3] = t.y; mMtx.m[2][3] = t.z; }
    void setScale(f32 s) { mFlags |= 0x40000000; mScale.x = s; mScale.y = s; mScale.z = s; }
};
void func_004CEAF0(Model* m);
struct Obj458;
void func_001512B4(Obj458* o, Vec3* p);

struct Self {
    u8 pad0[0x3d0];
    Vec3 m3D0;
    u8 pad3dc[0x3e8 - 0x3dc];
    s32 m3E8;
    u8 pad3ec[0x40c - 0x3ec];
    Model* m40C;
    u8 pad410[0x458 - 0x410];
    Obj458* m458;
    u8 pad45c[0x480 - 0x45c];
    f32 m480;
    u8 pad484[0x490 - 0x484];
    s32 m490;
    u8 pad494[0x4b8 - 0x494];
    Model* m4B8;
    void update(bool skip);
};

void Self::update(bool skip)
{
    Vec3 t;
    t.x = 0.0f; t.y = m480; t.z = 0.0f;
    f32 one = 1.0f;
    Mtx34 mtx;
    mtx.m[0][0] = one;  mtx.m[0][1] = 0.0f; mtx.m[0][2] = 0.0f;
    mtx.m[1][0] = 0.0f; mtx.m[1][1] = one;  mtx.m[1][2] = 0.0f;
    mtx.m[2][0] = 0.0f; mtx.m[2][1] = 0.0f; mtx.m[2][2] = one;
    mtx.m[0][3] = t.x; mtx.m[1][3] = t.y; mtx.m[2][3] = t.z;
    {
        Model*& mdl = m4B8;
        mdl->setRot(m490, m3E8, 0);
        mdl->setTrans(m3D0);
        mdl->setScale(one);
        func_004CEAF0(mdl);
        { Model* p = mdl; p->mFlags |= 0x40000000; func_001157FC(&p->mMtx, &mdl->mMtx, &mtx); }
        func_004CEAF0(mdl);
    }
    func_001512B4(m458, &m3D0);
    if (!skip) {
        Model*& mdl = m40C;
        mdl->setRot(m490, m3E8, 0);
        mdl->setTrans(m3D0);
        mdl->setScale(one);
        func_004CEAF0(mdl);
        { Model* p = mdl; p->mFlags |= 0x40000000; func_001157FC(&p->mMtx, &mdl->mMtx, &mtx); }
        func_004CEAF0(mdl);
    }
}



