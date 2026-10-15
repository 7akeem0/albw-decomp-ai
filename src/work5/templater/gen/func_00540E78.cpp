typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_540E78;
struct S0_540E78 { char pad40C[0x40C]; char m40C; };
char* f_540E78(S0_540E78* p) { return &p->m40C; }
