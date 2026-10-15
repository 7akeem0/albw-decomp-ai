
typedef unsigned int u32;
typedef unsigned char u8;
typedef int s32;

extern "C" u32 func_00115ED4(u32);

extern "C" void func_0010C1B8();
extern "C" void func_0010846C();
extern "C" void func_001084D4();
extern u32 data_00716798;
extern u32 ro_006B4778;

struct G { u8 flag; u8 pad[3]; s32 count; };
extern G data_007158B0;

void f(u32 a0) {
    if (!a0) {
G*g=&data_007158B0;if(g->count>0)--g->count;if(g->count!=0)return;if(!g->flag)return;g->flag=0;
        u32 v = data_00716798;
        if (v == 0)
            return;
        u32 n = func_00115ED4(v) >> 31;
        if (n)
            func_0010C1B8();
        data_00716798 = ro_006B4778;
    } else if (1 == a0) {
        func_0010846C();
    } else if (a0 == 2) {
        func_001084D4();
    }
}
