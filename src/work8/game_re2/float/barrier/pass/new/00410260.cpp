
extern "C" void* func_00412BB4(void*);
extern "C" void* func_00412A3C(void*, int);
extern "C" void func_00412C68(void*, void*);
struct Cls { void f(float x); template<class T0> void hlp0(T0 r) { *(unsigned char*)(r + 4) = 0x11;
    *(void**)(r + 0x10) = (char*)this + 0x124; }
};
void Cls::f(float x) {
    void* q = func_00412BB4(this);
    char* r;
    void * q_c16 = q;
    r = (char*)func_00412A3C(q_c16, 6);
    *(int*)(r + 0xc) = *(int*)((char*)q + 0x184);
     hlp0(r);
    *(float*)(r + 0x14) = x;
    void * q_c84 = q;
    char * r_c1 = r;
    func_00412C68(q_c84, r_c1);
}
