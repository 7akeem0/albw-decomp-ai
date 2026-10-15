// 0x31E30C: set three timer-like ints: m18 = 20, m20 = 30, m1C = 30
typedef int s32;
struct S31E { char pad[0x18]; s32 m18, m1c, m20; void init(); };
void S31E::init() { m18 = 20; m20 = 30; m1c = 30; }
