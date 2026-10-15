#pragma O2
#pragma Otime
typedef unsigned char u8;
typedef signed int s32;

struct Obj {
  u8 pad[0x488];
  signed char m488;
};

extern void* data_0070FB60;
extern s32 func_00588BE4(Obj*);
extern void* func_002E0168(s32);
extern void* func_00556D7C(void*);
extern void func_004E53B0(Obj*);
extern void func_004ECDE8(Obj*, void*, void*);

static bool valid(Obj*self){return self->m488==4;}
void func_004E415C(Obj*self,void*a1,void*a2){
  if (func_002E0168(func_00588BE4(self)) == 0) {
    if (self->m488 == 4) {
      if (data_0070FB60 != 0) {
        if (func_00556D7C(data_0070FB60) != 0) {
          func_004E53B0(self);
          return;
        }
      }
    }
  }
  func_004ECDE8(self, a1, a2);
}