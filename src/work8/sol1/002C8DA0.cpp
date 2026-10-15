

typedef unsigned char u8;
typedef signed char s8;
typedef unsigned short u16;
typedef short s16;
typedef unsigned int u32;
typedef int s32;
typedef float f32;

struct Control2317 { u16 current, max; u32 pad4, param; };

struct Flag16 {
    u16 v;
    Flag16(){}
    Flag16(u16 n):v(n){}
    void reset(u16 mask){*this = Flag16((u16)(v & ~mask));}
    void set(u16 mask){*this = Flag16((u16)(v | mask));}
};

struct Vec3 { f32 x,y,z; void setZero(){ for(s32 i=0;i<3;++i)(&x)[i]=0.f; } };

struct Flag32 {
    u32 v;
    void change(u32 mask, bool on) { if (on) v |= mask; else v &= ~mask; }
    void set(u32 mask) { change(mask, true); }
    void reset(u32 mask) { change(mask, false); }
};
extern "C" void func_0016BAF8(void*, int, int);
extern "C" void func_001507D8(void*, void*, int);
void sol1ctx_1(void* a0,void* const& a1,int const& a2){func_001507D8(a0,a1,a2);}

extern "C" void func_0014E138(void*, void*);
extern void* data_0070BB18;
namespace sead{template<class T>struct SafeStringBase{virtual~SafeStringBase(){}virtual void assureTerminationImpl_()const{}const T*text;SafeStringBase(const T*s):text(s){}};}typedef sead::SafeStringBase<char>SafeString;
void func_002C8DA0(char* self, void* a1) {
    if (*(u8*)(self + 0x478)) {
        func_0016BAF8(data_0070BB18, 1, *(s16*)(self + 0x54));
        const SafeString&s=SafeString("SE_SwitchCandle_BURNING");
         
        
        sol1ctx_1(self, const_cast<SafeString*>(&s), 0);
    }
    func_0014E138(self, a1);
}
