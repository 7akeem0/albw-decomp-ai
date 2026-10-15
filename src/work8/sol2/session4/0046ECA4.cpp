
extern "C" void func_001B6D40(void*);
extern "C" void func_004277DC(void*);
extern "C" void func_005452D4(void*);
extern char data_007142C8[];
struct Cls {
    char pad1[0x74];
    void* m74;
    char pad2[0xac - 0x78];
    void* mAC;
    void f();
};
void Cls::f() {
    func_001B6D40(this);
    func_004277DC(m74);
    void* g=*(void**)data_007142C8;
    struct Flag32 { int v; void set(int m) { v |= m; } };
    void* p = *(void**)((char*)g + 0x80);
    Flag32* f = (Flag32*)((char*)p + 0x18);
    int value=f->v;value|=1;f->v=value;__memory_changed();p=*(void**)((char*)g+0x80);value|=2;((Flag32*)((char*)p+0x18))->v=value;
    void* q = *(void**)((char*)g + 0x84);
    if (0 != q) {
        Flag32* f2 = (Flag32*)((char*)q + 0x18);
        int value=f2->v;__asm{orr value,value,#1}__asm{orr value,value,#2}f2->v=value;
    }
    void* r = mAC;
    if (r != 0) func_005452D4((char*)r + 0x114);
}
