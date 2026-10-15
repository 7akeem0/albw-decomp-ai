// 0x48034C
extern "C" void func_002313DC(void*);
extern "C" void func_00231488(void*, float);
struct Sub { char pad[8]; int m8; char* mC; };
struct Elem { char pad[0x28]; unsigned char m28; };
struct Cls { char pad1[0x1c]; Sub* m1C; char pad2[0x9c - 0x20]; short m9C; short m9E; void f(); };
void Cls::f() {
    Sub* c = m1C;
    int idx = m9E;
    int cnt = c->m8;
    char* base = c->mC;
    char* e = (unsigned)cnt > (unsigned)idx ? base + idx * 0x38 : base;
    *(unsigned char*)(e + 0x28) = 1;
    func_002313DC((char*)this + 0x9c);
    func_002313DC((char*)this + 0xa8);
    func_00231488((char*)this + 0xa8, 0.0f);
}
