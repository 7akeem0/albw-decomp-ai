typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32;

u32 func_0049F688(void* p);
void func_0010F1DC(void* p, u32 v);
void func_00322274(void* p, u32 v);

static inline u32 init379(u8* p,u32 value_input,u32 flag_input){u32 value=value_input;*(u32*)(p+0x28)=value;return flag_input;}
void* func_00379B54(u8* self, u32 a, u32 b) {
    if (*(u32*)(self + 0x1c) == 0) {
        return 0;
    }
    u8* r5 = self + 0x14;
    u8* x = (u8*)func_0049F688(r5);
    if (0 != x) {
        r5 = x - *(u32*)(r5 + 0xc);
    } else {
        r5 = 0;
    }
    u8* r4 = self + 0x24;
    s32 cnt = *(u32*)(r4 + 0xc);
    func_0010F1DC(r4, cnt + (u32)r5); 
    *(u32*)(r4 + 8) += 1;
    func_00322274(r5,init379(r5,a,b));
    return r5;
}
