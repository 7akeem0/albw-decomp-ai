typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct Req5C { char storage[0x5c]; Req5C(u16, u32, bool); };
namespace sead{template<class T>struct SafeStringBase{virtual~SafeStringBase(){}virtual void assureTerminationImpl_()const{}const T*text;SafeStringBase(const T*s):text(s){}};}typedef sead::SafeStringBase<char>SafeStr;
struct Self { char pad0[0x434]; void* m434; };

extern char ro_006F5988[];
void func_0016898C(void* anim, const Req5C& r);
void func_00150A84(void* self, const SafeStr& s, s32 v);

void func_0035B19C(Self* self) {
    func_0016898C(self->m434, Req5C(0, 10, false));
    
    
    func_00150A84(self,SafeStr("SE_JewelRockCandle_FIRE"),0);
    

return;
}
