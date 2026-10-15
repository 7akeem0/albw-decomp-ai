typedef unsigned char u8;typedef signed char s8;typedef unsigned short u16;typedef short s16;typedef unsigned int u32;typedef int s32;typedef float f32;
struct Flag32{u32 v; void change(u32 mask,bool on){if(on)v|=mask;else v&=~mask;} void set(u32 m){change(m,true);} void reset(u32 m){change(m,false);}};
struct S2FB9 { char pad[0x59c]; Flag32 m59C; char g[0x5a8-0x5a0]; char c5A8[0x20]; };
extern "C" void func_004FD038(void*,bool);
extern "C" void func_004FAD90(S2FB9*);
void func_002FB984(S2FB9* p) {
    p->m59C.change(4,false);
    func_004FD038(p->c5A8,false);
    p->m59C.reset(0x20);
    func_004FAD90(p);
    p->m59C.reset(0x80);
}
