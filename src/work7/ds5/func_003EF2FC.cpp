// 0x3EF2FC
extern "C" void func_003F6A20(void*);

struct Head {
    char pad[0x7c];
    int m7c;
};
struct Pool {
    char* mCur;
};
extern Pool data_00716238;

void func_003EF2FC() {
    Pool* a = &data_00716238;
    char* p = a->mCur;
    ((Head*)p)->m7c = 0;
    a->mCur = p + 0x80;
    func_003F6A20(a);
}
