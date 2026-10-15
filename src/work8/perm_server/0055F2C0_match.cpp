
typedef unsigned int u32;
typedef unsigned char u8;

extern u32 g_tbl694F3C[];
extern u8* g_tbl70A250[];

struct Mgr72 {
    u8 pad0[0x23fc];
    u32 idx;
};

struct Key72 {
    u8 pad0[0xc];
    u32 m0c;
    u32 m10;
};

void func_004F1C4C(void* self, u8* ptr, u32 v);

void func_0055F2C0(Key72* k, Mgr72* m)
{
    u8* hi = (u8*)m + 0x2000;
    u32 idx = *(u32*)(hi + 0x3fc);
    u32* kv = &k->m0c;
    u32 v = kv[1];
    u32 n = kv[0];
    if (g_tbl694F3C[idx] < n)
        return;
    u8* ptr = g_tbl70A250[idx] + n * 16;
    func_004F1C4C((u8*)m + 0x2204, ptr, v);
}
