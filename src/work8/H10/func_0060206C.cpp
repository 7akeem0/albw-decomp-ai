typedef unsigned int u32;

extern char bss_0079CAB8[];
void func_00602148();

struct Ent { char p0[8]; u32 m8; u32 mc; char p1[28 - 16]; };
struct Obj {
    char p0[0x10];
    u32 m10;
    char p1[0x18 - 0x14];
    char* m18;
    char p2[0x28 - 0x1c];
    u32 m28;
};

extern "C" void func_0060206C() {
    Obj* o = *(Obj**)(bss_0079CAB8 + 0xa0);
    u32 n = o->m28;
    char* base = o->m18;
    Ent* e = (Ent*)(base + n * 28);
    if ((e->mc & 2) == 0) {
        o->m10 = e->m8 + o->m10;
    }
    func_00602148();
}
