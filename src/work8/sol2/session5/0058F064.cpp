typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct Buf { char pad[0x64]; };

void func_0010A464(Buf* b);
void func_00533090(void* p, u32 k, Buf* b);
void func_0025B66C(Buf* b, f32 t);
void func_0025B84C(Buf* b);

static void work(void* owner,s32 id){
    s32 k=id;char*p=(char*)owner;
    if ((s32)k == -1) return;
    Buf buf;
    func_0010A464(&buf);
    func_00533090(p, k, &buf);
    func_0025B66C(&buf, 0.4f);
    func_0025B84C(&buf);
}
void func_0058F064(void*s,s32 k){work((char*)s-0x3c,k);}
