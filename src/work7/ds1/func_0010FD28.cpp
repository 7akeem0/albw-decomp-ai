typedef unsigned int u32;
typedef signed int s32;

extern "C" u32* func_0010DA24(void*);

void func_0010FD28(u32* out) {
    u32 local[2];
    u32 s = *func_0010DA24(local);
    for (s32 i = 0; i < 4; i++) {
        s = (s ^ (s >> 30)) * 0x6C078965u + i + 1;
        out[i] = s;
    }
}
