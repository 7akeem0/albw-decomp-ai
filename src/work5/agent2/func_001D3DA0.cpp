typedef unsigned int u32;
typedef signed int s32;

struct Obj40C;
void func_0034C8F0(Obj40C* o, u32 a, s32 b);

class C3DA0 {
public:
    int func_001D3DA0(s32 a);
    char pad[0x3a0];
    u32 m3A0;
    char pad3a4[0x40c - 0x3a4];
    Obj40C* m40C;
};

int C3DA0::func_001D3DA0(s32 a) {
    func_0034C8F0(m40C, m3A0, a);
    return 0;
}
