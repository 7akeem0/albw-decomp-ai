

typedef unsigned char u8;
typedef signed char s8;
typedef unsigned short u16;
typedef short s16;
typedef unsigned int u32;
typedef int s32;
typedef signed long long s64;
typedef unsigned long long u64;
typedef float f32;
struct Vec2 {f32 x,y;};
struct Vec3 { f32 x,y,z; };
struct Pair32 {u32 a,b;};
struct RangeNode19 {RangeNode19* prev;RangeNode19* next;};
struct CountedList19 {u32 count;RangeNode19 root;};
struct CriticalSection19 {u32 words[3];};
struct Flag32 { u32 v; void change(u32 m,bool on){if(on)v|=m;else v&=~m;} void set(u32 m){change(m,true);} void reset(u32 m){change(m,false);} };
struct Flag16 {u16 v;Flag16(){} Flag16(u16 x):v(x){} void reset(u16 bits){*this=Flag16(v&~bits);} void set(u16 bits){*this=Flag16(v|bits);}};
struct Ctrl231 {s16 kind,index;u32 frame;void* owner;void init(void*,s16,s16);};
struct C {u8 pad[0xAF4];u16 mode;void set(u16 v){mode=v;}};
struct S {u8 pad[0x48];C* child;u8 gap[0x16];u8 b62,b63;u8 gap2[12];volatile s8 kind;};
static inline void reset42(S*s,s8 kind){u8* p2=&s->b62;u8* p3=&s->b63;*p2=0;*p3=0;}
extern "C" bool f_004292A0(S*s){if(s->kind!=11)s->child->set(2);reset42(s,s->kind);return true;}
