typedef unsigned char u8;
typedef unsigned int u32;

namespace sead{template<class T>struct SafeStringBase{virtual~SafeStringBase(){}virtual void assureTerminationImpl_()const{}const T*text;SafeStringBase(const T*s):text(s){}};}typedef sead::SafeStringBase<char>SafeString;

extern "C" void func_003615F0(u32);
extern "C" void* func_005841A8(u32, u32, u32);
static void* sol1ctx_1(u32 const& a0,u32 a1,u32 a2){return func_005841A8(a0,a1,a2);}

extern "C" void func_00230610(void*, u32);
extern "C" void func_00150A84(void*, const SafeString*, int);
extern "C" void func_00297298(u32, int);
extern "C" u32 data_0070FB60;
extern "C" u32 data_00706E20;
extern "C" u32 ro_00693130;
extern "C" u32 data_00711F50;
extern "C" char ro_006F5988[];

void func_00135800(u8* a0) {
    func_003615F0(data_0070FB60);
    u8* p = (u8*)sol1ctx_1(data_00706E20, ro_00693130,
                               *(u32*)((u8*)0x3dbc0 + data_00706E20));
    p = *(u8**)p;
    if (p) {
        func_00230610(a0 + 0x4fc, *(u32*)(p + 0x2cc));
    }
    const SafeString&s=SafeString("SE_Barrier_VANISH"); 
    
    
    func_00150A84(a0, &s, 0);
    func_00297298(data_00711F50, 0xf);
}
