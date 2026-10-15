#include "range.h"
struct S3D3 {s32 count;};struct O3D3 {u8 pad[0x40c];S3D3 state;s32 count()const;};
s32 O3D3::count()const{return state.count;}
extern "C"  void func_00665E08(S3D3*,s32);
extern "C" void func_0033D338(O3D3*p){if(p->count()>30)func_00665E08(&p->state,5);}
