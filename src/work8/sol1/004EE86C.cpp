typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct Tok { s8 m0; s32 m4; };

bool func_004EE86C(Tok*self){s8 k=self->m0;u32 u=(u32)k;if(u>5&&(u-0x16)>4)return false;switch(k){case 0:{s32 t=self->m4;if(t==0)break;if(t==0x25||t==0x2c)break;return true;}
case 1:{s32 t=self->m4;if(t==0)break;if(t==0x26)break;return true;}
case 32:return true;
default:break;}return false;}
