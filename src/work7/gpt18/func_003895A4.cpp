typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct Elem_003895A4{char pad[0x10];f32 speed;};struct Ctl_003895A4{char pad[0x14];Elem_003895A4* data;void setSpeed(f32 v){data->speed=v;}};struct Obj_003895A4{char pad[1124];Ctl_003895A4* ctl;};void f_003895A4(Obj_003895A4* p){p->ctl->setSpeed(1.0f);}
