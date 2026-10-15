typedef unsigned char u8;
typedef unsigned int u32;
typedef int s32;

struct Mgr;
extern Mgr* data_0070FB60;
u32 func_00194BFC(u8 v);
u32 func_0055696C(Mgr* m, u32 id);

struct Self {
    u8 pad0[0x9d0];
    u8 m9D0;
    u8 pad9d1[0xa3a - 0x9d1];
    u8 mA3A;
    bool func_00652CD0(s32 v);
    bool func_00588BF0(s32 v);
    bool check(s32 kind);
    bool impl(s32 kind, u8 off, u8 on);
};

inline bool Self::impl(s32 kind, u8 off, u8 on)
{
    switch (kind) {
    case 1:
        if (func_0055696C(data_0070FB60, func_00194BFC(m9D0)) == 1) goto fail;
        break;
    case 2:
        mA3A = on;
        if (func_00652CD0(1)) goto fail;
        break;
    case 3:
        if (func_0055696C(data_0070FB60, func_00194BFC(m9D0)) >= 2) goto fail;
        break;
    case 4:
        if (m9D0 == 1 && func_00588BF0(0) && !func_00588BF0(1)) return false;
        break;
    case 5:
        mA3A = off;
        if (func_00652CD0(0)) goto fail;
        break;
    case 6:
        if (m9D0 == 8) goto fail;
        break;
    case 7:
        if (m9D0 == 2) goto fail;
        break;
    case 8:
        if (m9D0 == 7) goto fail;
        break;
    }
    return true;
fail:
    return false;
}

bool Self::check(s32 kind) { return impl(kind, 0, 1); }



