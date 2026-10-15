// 0x3C7ED8 (callback slot): report result 0xC88044AA with the current pc (0x10AC24 = recordDiagnostic)
typedef unsigned int u32;
extern void func_0010AC24(u32 result, u32 pc);
void report_3C7ED8() { u32 r = 0xC88044AA; func_0010AC24(r, __current_pc()); }
