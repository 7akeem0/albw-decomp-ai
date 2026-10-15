// 0x400A64
extern "C" void func_0041E7C4(void*);
extern "C" void func_00110D44(void*, void*, int);
extern char ro_006A858C[];
struct Cls {
    void f();
};
void Cls::f() {
    func_0041E7C4(this);
    *(int*)((char*)this + 0x61c) = 0;
    *(int*)((char*)this + 0x620) = 0;
    *(int*)((char*)this + 0x624) = 0;
    *(unsigned char*)((char*)this + 0x628) = 1;
    *(unsigned char*)((char*)this + 0x629) = 1;
    *(unsigned char*)((char*)this + 0x62a) = 7;
    *(unsigned char*)((char*)this + 0x62b) = 7;
    func_00110D44((char*)this + 0x634, ro_006A858C, 0x60);
}
