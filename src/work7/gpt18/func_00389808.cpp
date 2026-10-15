typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct Elem_00389808{char pad[0x10];f32 speed;};struct Ctl_00389808{char pad[0x14];Elem_00389808* data;void setSpeed(f32 v){data->speed=v;}};struct Obj_00389808{char pad[1124];Ctl_00389808* ctl;};void f_00389808(Obj_00389808* p){p->ctl->setSpeed(0.0f);}
