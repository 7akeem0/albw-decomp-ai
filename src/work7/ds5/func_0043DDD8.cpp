// 0x43DDD8
void func_0043C6E4(void*);
void func_0043D388(void*);
void func_0047AE54(void*);
extern void* data_007142C8;

struct P {
    char p0[0x70];
    unsigned char m70;
    char p1[0x158 - 0x71];
    void* m158;
};

void func_0043DDD8(P* self) {
    func_0043C6E4(self);
    func_0043D388(self);
    func_0047AE54(self->m158);
    self->m70 = 0;
    unsigned short* p = (unsigned short*)((char*)data_007142C8 + 0x33e);
    *p |= 8;
}
