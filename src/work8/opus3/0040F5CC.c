typedef unsigned int u32; typedef int s32; typedef unsigned char u8; typedef signed char s8;
typedef unsigned short u16; typedef short s16; typedef float f32;
typedef void (*ErrCb)(void* a, void* b);
typedef struct Sub34 { char pad[0x18]; void* m18; } Sub34;
typedef struct Obj {
    char pad0[0x34]; Sub34* m34; char m38[4]; u32 m3c; u32 m40; u32 m44; ErrCb m48; void* m4c;
} Obj;
extern int func_0040E74C(void* p, u32 pos, s32 z);
extern int func_0040E6E8(void* p, void* buf, u32 size, s32* out);
extern void func_003E65BC(void* p, s32 n);
extern void* func_00569DE0(void* p);

static void onError(Obj* o)
{
    void* a = o->m34->m18;
    ErrCb cb = o->m48;
    if (cb) cb(a, o->m4c);
}

s32 FUN_0040f5cc(Obj* o, void* buf, u32 size)
{
    u32 pos = o->m3c;
    u32 end = o->m40 + o->m44;
    s32 n;
    u32 lim = pos + size;
    if (end < lim)
        size = (end - pos + 0x1f) & ~0x1f;
    if (!func_0040E74C(o->m34, pos, 0)) {
        onError(o);
        return -1;
    }
    n = 0;
    if (!func_0040E6E8(o->m34, buf, size, &n)) {
        onError(o);
        return -1;
    }
    if (n > 0) func_003E65BC(o->m38, n);
    return n;
}
