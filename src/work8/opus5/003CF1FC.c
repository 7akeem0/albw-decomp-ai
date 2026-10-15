typedef unsigned char u8;
typedef unsigned int u32;
typedef int s32;

typedef struct Obj Obj;
typedef s32 (*VFn30)(Obj*, u32, u32, s32, s32, s32);
typedef struct VT { void* pad[12]; VFn30 f30; } VT;
typedef struct Chan { u8 a[0x20]; u8 b[0x18c]; s32 size; } Chan;
struct Obj {
    VT* vt;
    s32 m4;
    u8 pad8[2];
    u8 mBusy[2];
    u8 pad[0x1fc - 0xc];
    Chan mCh[2];
};

extern s32 FUN_003cecd4(Obj* o, void* a, void* b, s32 c, s32 d);

s32 FUN_003cf1fc(Obj* o, s32 which, u32 arg)
{
    s32 h = o->m4;
    s32 r;
    if (h != 0) {
        if (which != 0) {
            r = o->vt->f30(o, arg, 0x20, h, 4, 0x14);
            if ((s32)(r & 0x80000000) >= 0) {
                Obj* t = o;
                r = FUN_003cecd4(t, o->mCh[1].a, o->mCh[1].b, o->mCh[1].size, 1);
                o->mBusy[1] = 0;
            }
        } else {
            r = o->vt->f30(o, arg, 0x20, h, 3, 0x14);
            if ((s32)(r & 0x80000000) >= 0) {
                Obj* t = o;
                r = FUN_003cecd4(t, o->mCh[0].a, o->mCh[0].b, o->mCh[0].size, 0);
                o->mBusy[0] = 0;
            }
        }
    } else {
        r = (s32)0xC8810BEA;
    }
    return r;
}

