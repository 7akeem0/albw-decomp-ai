typedef unsigned int u32;
extern char ro_006DD4B8[];
void func_002E1B70(void* p);
void* func_0036746C(void* p);
void func_001510A4(void* p);

struct Obj {
    void* m0;
    char p0[0x320 - 4];
    void* m320;
};

extern "C" void func_002D0394(Obj* self) {
    void* t = ro_006DD4B8 + 0x54;
    self->m0 = ro_006DD4B8;
    self->m320 = t;
    func_002E1B70((char*)self + 0x4e0);
    char* r = (char*)func_0036746C((char*)self + 0x4a8);
    func_001510A4(r - 0x400 - 0xa8);
}
