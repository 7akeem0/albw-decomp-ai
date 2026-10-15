

typedef unsigned char u8;
typedef signed char s8;
typedef unsigned short u16;
typedef short s16;
typedef unsigned int u32;
typedef int s32;
typedef float f32;
typedef unsigned long long u64;
struct PB014 { virtual void v00(); virtual void v01(); virtual void v02(); virtual void v03(); virtual void v04(); virtual void v05(); virtual void v06(); virtual void v07(); virtual void v08(); virtual void v09(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19(u32); };
struct TB014 : PB014 { u8 pad[0x64-4]; u32* m64; };
extern "C" void func_001B6DE0(void*);
extern "C" void func_00428B64(u32);
static void clear(u32* p,u32 zero){*p=zero;}
void f(TB014* self) {
  func_001B6DE0(self);
  self->v19(0);
  self->v19(0);
  if (*(u32*)self->m64 != 0) {
    func_00428B64(*(u32*)self->m64);
    clear(self->m64,0);
  }
}
