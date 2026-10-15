typedef unsigned char u8;
typedef unsigned int u32;
typedef int s32;

struct Info { u8 data[0x38]; };
void func_003D231C(Info* i);
s32 func_003CF1AC(void* self, u32 a, void* buf, u32 size, s32 which, Info* info);
bool func_00676AFC(u32 r);
void func_00676B30(u32 r);

struct Self {
    u8 pad0[0x210];
    u32 m210;
    u8 pad214[0x3c0 - 0x214];
    u32 m3C0;
    void prepare();
    void fill(Info* info, s32 which, u32 idx);
    s32 load(s32 which, u32 idx, u32 arg);
};

s32 Self::load(s32 which, u32 idx, u32 arg)
{
    u32 n = which == 0 ? m210 : m3C0;
    if (n > idx) {
        u8 buf[0x2800];
        Info info;
        prepare();
        func_003D231C(&info);
        fill(&info, which, idx);
        u32 r = func_003CF1AC(this, arg, buf, 0x2800, which, &info);
        if ((s32)(r & 0x80000000) >= 0) return 0;
        if (r == 0xC8A10BF0) return 1;
        if (r == 0xC8810BEA || r == 0xE0E10BFD || r == 0xE0A10BF9 || r == 0xE0A1086C ||
            r == 0xE0A1086D || r == 0xE0810BF8 || r == 0xE0210BEB || r == 0xE0A10BEE ||
            r == 0xE0E10BEE || r == 0xC8610BF3 || r == 0xC8810BEF || r == 0xC8E10BE9 ||
            r == 0xC8E10865 || r == 0xC8E10866 || r == 0xC8E10867 || r == 0xC8E10868 ||
            r == 0xC8E10869 || r == 0xC8E1086B || r == 0xC8E1086A || r == 0xE0E10BF6 ||
            r == 0xC8A10BF2 || r == 0xD0A1086E) {
        } else if (!func_00676AFC(r)) {
            func_00676B30(r);
        }
    }
    return 8;
}
