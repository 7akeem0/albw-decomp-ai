
typedef unsigned int u32;
typedef int s32;
typedef unsigned char u8;
typedef unsigned short u16;
struct Npc;
struct Blk800 {
    u8 p0[0x3c]; u32 m3c; u8 p1[0x4c - 0x40]; u16 m4c; u16 m4e;
    u8 p2[0x5d - 0x50]; u8 m5d;
};
struct Npc {
    u8 p0[0x3ac]; u32 m3ac; u8 p1[0x810-0x3b0]; u32 m810;
    u8 p2[0x857-0x814]; u8 m857; u8 m858; u8 pad859; u8 m85a;
    u8 p3[0x85d-0x85b]; u8 m85d; u8 p4[0x86c-0x85e]; volatile u32 m86c;
    u8 p5[0x8ac-0x870]; u32 m8ac; u8 p6[0x964-0x8b0]; u8 m964;
    u8 p7[0x984-0x965]; s32 m984;
};
extern "C" void* data_00709D28;
extern "C" void func_004A8304(void*, u32);
extern "C" void func_004A879C(void*, u32, s32);
extern "C" void func_001E6A3C(Npc*);
extern "C" void func_004C07D8(Npc*);
extern "C" __attribute__((weak)) void func_00629D84(Npc*, s32, s32);
u32 getId(Npc* p) { return p->m86c; }
void target(Npc* p) {
    Blk800* b = (Blk800*)((char*)p + 0x800);
    if (b->m5d == 0) return;
    if (p->m85a == 3 && p->m858 != 0) {
        void* const& g = data_00709D28;
        func_004A8304(g, getId(p));
        func_004A879C(g, getId(p), 3);
    }
    func_001E6A3C(p);
    p->m3ac = b->m3c;
    func_004C07D8(p);
    p->m810 = 0;
    p->m85d = 0;
    b->m4c = 0;
    b->m4e = 0;
    if (p->m964 == 2 && (p->m8ac & 0x20) != 0 && (p->m8ac & 0x10) == 0 && p->m857 == 0) {
        func_00629D84(p, 3, 0);
        return;
    }
    func_00629D84(p, p->m984, 0);
}
