typedef unsigned char u8;

extern "C" int func_0010B2F0(void*);
extern "C" int func_0010B278(void*);
extern "C" int func_0010B32C(int);
extern "C" int func_0010B2B4(int);
extern "C" u8 data_00715890[];

int func_001093C0() {
    u8* r4 = data_00715890;
    if(r4[0]==0)return 0;
    u8 buf[8];
    int a = func_0010B2F0(buf);
    int ma = a & (int)0x80000000;
    if(ma<0)return a;
    int b = func_0010B278(buf + 4);
    int mb = b & (int)0x80000000;
    if(mb<0)return b;
    r4[1] = buf[0] | buf[4];
    int c = func_0010B32C(0);
    if(c==0xc9405001)return func_0010B2B4(0);return c;
}
