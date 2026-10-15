// 0x4145F8
extern "C" void* func_00419924(void*, void*);
extern "C" void* func_00419C50(void*, void*);
struct Obj {
    int m0;
    int m4;
    void* m8;
    void* mC;
    void* m10;
    unsigned char m14;
    unsigned char m15;
    unsigned char m16;
    unsigned char m17;
};
struct Cls { void f(Obj* o); };
void Cls::f(Obj* o) {
    o->m0 = 0;
    o->m17 = 0;
    o->m15 = 0;
    o->m8 = 0;
    void* r = func_00419924(this, o);
    func_00419C50(r, o);
    int fn = (int)o->mC;
    o->m14 = 0;
    if (fn != 0) ((void(*)(Obj*, int, void*))(void*)fn)(o, 3, o->m10);
}
