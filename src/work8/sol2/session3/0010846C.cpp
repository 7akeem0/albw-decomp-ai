typedef unsigned char u8;
typedef unsigned int u32;
typedef signed int s32;

extern "C" int func_0010A9FC(void*);
extern "C" u8 data_00716790[];
extern "C" u32 data_0072581C;
extern "C" u32 data_00716798;
extern "C" u8 ro_006BE004[];

void func_0010846C() {
    struct G{u8 flag;u8 pad[3];s32 count;};G*g=(G*)data_00716790;
    if(g->count>0)--g->count;if(g->count!=0)return;
    if (g->flag == 0) return;
    g->flag = 0;
    int r = func_0010A9FC(&data_0072581C);
    r &= (int)0x80000000;
    if (r < 0) return;
    data_00716798 = *(u32*)ro_006BE004;
}
