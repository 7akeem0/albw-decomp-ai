typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef unsigned int u32; typedef signed int s32; typedef long long s64;
struct X2934 {
    virtual void vf();
    char pad004[0x2e - 4]; u16 m2e; char pad30[0x36 - 0x30]; u16 m36;
    char pad38[0x788 - 0x38]; char m788[0xab8 - 0x788]; u8 mab8;
};
bool func_00588BF0(X2934* x, int a);
void func_0065CC10(void* p, int a) ;
void X2934::vf() {
    if (func_00588BF0(this, 1)) {
        func_0065CC10(m788, 2);
        return;
    }
    if (m2e == 0) {
        if (func_00588BF0(this, 0))
            return;
    } else if (m36 != 0) {
        if (func_00588BF0(this, 0))
            return;
    }
    if (mab8 == 0)
        mab8 = 1;
}
