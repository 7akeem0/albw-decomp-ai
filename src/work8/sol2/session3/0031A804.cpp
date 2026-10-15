namespace sead{template<class T>struct SafeStringBase{virtual~SafeStringBase(){}virtual void assureTerminationImpl_()const{}const T*text;SafeStringBase(const T*s):text(s){}};typedef SafeStringBase<char> SafeString;}typedef sead::SafeString SafeString;


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
extern "C" void* func_002C11E8(void*, int, int, int);
extern "C" void func_0016898C(void*, void*);
extern "C" void func_00150A84(void*,const SafeString&,int);
void func_0031A804(char* self) {
    char buf[0x60];
    char* r = (char*)func_002C11E8(buf, 2, 0xa, 0);
    func_0016898C(*(void**)(self+0x444),r);func_00150A84(self,SafeString("SE_TurtleBullied_JUMP"),0);
}
