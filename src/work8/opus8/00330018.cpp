typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32;
struct CmdBuf { u32 cur; u32 m4; u32 m8; u32 mc; u32 m10; };
struct CmdSet { u32* ptr; s32 count; };
struct CmdSets { CmdSet sets[3]; };
u32 func_003CC1E4(u32 cur, u32 n);
u32 func_003CC230(u32 cur, u32* out, u32* cmds, u32 size);
static inline void addCommand(CmdBuf* cb, u32* const& cmds, const u32& size)
{
    cb->cur = func_003CC1E4(cb->cur, ((cb->cur - cb->m8) & ~3u) + 0x18);
    u32 out;
    cb->cur = func_003CC230(cb->cur, &out, cmds, size);
    if (cb->mc) *(u32*)cb->mc = (cb->cur - cb->m8) >> 3;
    cb->mc = out;
    cb->m8 = cb->cur;
    if (cb->m10 == 0) cb->m10 = (cb->cur - cb->m4) & ~3u;
}
struct Shader {
    char pad[0x3c]; CmdSets* m3c; s32 m40;
    void bind(CmdBuf** pcb);
};
static inline void addSet(CmdBuf* cb, u32* p, u32 size) { if (!p) return; addCommand(cb, p, size); }

void Shader::bind(CmdBuf** pcb)
{
    CmdSets* sets = m3c;
    if (!sets) return;
    switch (m40) {
    case 0: addSet(*pcb, sets->sets[0].ptr, sets->sets[0].count * 4); break;
    case 1: addSet(*pcb, sets->sets[1].ptr, sets->sets[1].count * 4); break;
    case 2: addSet(*pcb, sets->sets[2].ptr, sets->sets[2].count * 4); break;
    }
}
