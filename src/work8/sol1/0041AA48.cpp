
struct P {
    char p0[0x100];
    unsigned m100; void func_0041AA48(unsigned,unsigned);
};

void P::func_0041AA48(unsigned mask, unsigned value) {
    P* self=this;
    unsigned int i=0; unsigned char v=(unsigned char)value;
    for (; i < (int)self->m100 && mask != 0; i++, mask >>= 1) {
        if (mask & 1) {
            *(unsigned char*)((char*)self + i * 36 + 0x1b11) = v;
        }
    }
}
