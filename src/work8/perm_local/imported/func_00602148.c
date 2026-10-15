typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32;
typedef struct Entry { u8 b0; u8 b1; u8 b2; char pad[0x1c - 3]; } Entry;
typedef void (*Cb)(s32);
typedef struct Seq { char pad[0x18]; Entry* m18; char pad1c[4]; s32 m20; char pad24[4]; s32 m28; char pad2c[0xc]; Cb m38; u8 b3c; } Seq;
typedef struct Mgr { char pad[0x11]; u8 b11; u8 b12; char pad13[5]; u8 b18; char pad19[0xa0 - 0x19]; Seq* ma0; } Mgr;
extern Mgr bss_0079CAB8;
void func_003E3F00(void);
void func_003E3F10(void);
void func_0060226C(void);
void func_00602148(void)
{
    Mgr* g = &bss_0079CAB8;
    Seq* s = g->ma0;
    Entry* e = &s->m18[s->m28];
    s32 arg;
    Cb cb = 0;
    func_003E3F00();
    s->m28++;
    if (s->m38 != 0 && (e->b1 != 0 || (s->m28 == s->m20 && s->b3c != 0))) { cb = s->m38; if (arg) { arg = s->m28; } else { arg = s->m28; } }
    if (e->b2) { g->b12 = 0; g->b18 = 0; g->b11 = 0; }
    else if (s->m28 < s->m20) func_0060226C(); else g->b11 = 0;
    func_003E3F10();
    if (cb != 0) cb(arg);
}
