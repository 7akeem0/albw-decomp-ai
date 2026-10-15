

typedef unsigned char u8;
typedef signed char s8;
typedef unsigned short u16;
typedef short s16;
typedef unsigned int u32;
typedef int s32;
typedef float f32;
typedef unsigned long long u64;
extern __svc(0x32) u32 sendSyncRequest26(u32);
extern u32 data_00716788;
struct Req1A { u32 header, f1, f2, f3, f4; };
u32 f(u32 a0, u32 a1, u32 a2, u32* out) {
  s32 tls;
  __asm { mrc p15,0,tls,c13,c0,3 }
  __schedule_barrier();
  Req1A* cmd = (Req1A*)(0x80 + tls); cmd->header = 0x100C2;
  cmd->f1 = a0;
  cmd->f2 = a1;
  cmd->f3 = a2; __schedule_barrier();
  cmd->f4 = 0x20;
  u32 result = sendSyncRequest26(data_00716788);
  if ((s32)(result & 0x80000000u) >= 0) {
    *out = cmd->f2;
    result = cmd->f1;
  }
  return result;
}
