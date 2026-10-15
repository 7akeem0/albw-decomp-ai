#include "../../work7/gpt30/npc_exec136.h"
struct Obj478 { virtual void v0();virtual void v1();virtual void v2();virtual void v3();virtual void v4();virtual void v5();virtual void v6();virtual void v7();
  virtual void v8();virtual void v9();virtual void v10();virtual void v11();virtual void v12();virtual void v13();virtual void v14();virtual void v15();
  virtual void* v16(); };
struct Vec3x { f32 x,y,z; };
extern void func_0030CBE4(void*, Vec3x*);
extern void func_004C00F4(NpcExec30*);
void target(NpcExec30*p){
  p->state.execute();
  char* b=(char*)p;
  if(*(u8*)(b+0x9be)==1) func_0030CBE4(((Obj478*)(b+0x478))->v16(),(Vec3x*)(b+0x3d0));
  func_004C00F4(p);
  p->func_004BC8D8();
}
