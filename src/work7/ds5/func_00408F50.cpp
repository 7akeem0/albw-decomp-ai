// 0x408F50
extern "C" int func_00569C64(void*, void*);
struct Cls {
    int f(void* a1);
};
int Cls::f(void* a1) {
    unsigned int buf[8];
    int r = 0;
    if (func_00569C64(a1, buf) != 0) {
        unsigned int t = buf[0] + buf[2];
        r = buf[5] + t;
    }
    return r * 0x2c;
}
