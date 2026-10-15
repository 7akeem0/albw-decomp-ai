#include "range.h"
struct DashActor30{u8 pad0[0x3dc];Vec3 velocity;u8 pad3e8[0x8f4-0x3e8];u32 count;u8 pad8f8[0x908-0x8f8];u8 flag908;u8 pad909[0x98f-0x909];u8 flag98f;};
struct SafeString30{const char*text;virtual~SafeString30(){}virtual void assure()const{}SafeString30(const char*s):text(s){}};
extern const char ro_0069A84C[];
extern "C" void func_002F8DE4(DashActor30*,s32,s32,bool);
extern "C" void func_001509A4(DashActor30*,const SafeString30&,u32);
void target(DashActor30*p){
    p->count=0;p->flag908=0;func_002F8DE4(p,0,-1,false);
    p->velocity.x=0.f;p->velocity.z=0.f;
    func_001509A4(p,SafeString30(ro_0069A84C),0);
    p->flag98f=1;
}
