

typedef unsigned char u8;
typedef signed char s8;
typedef unsigned short u16;
typedef short s16;
typedef unsigned int u32;
typedef int s32;
typedef float f32;
struct Vec2 { f32 x, y; Vec2(f32 a, f32 b):x(a),y(b){} };
struct Vec3 { f32 x, y, z; };
struct Flag32 { u32 v; void change(u32 m,bool on){ if(on) v|=m; else v&=~m; } void set(u32 m){change(m,true);} void reset(u32 m){change(m,false);} };
struct Sub114;
struct Owner56A { char pad0[0x98]; u8 valid; char pad99[0x7b]; Sub114* unused; };
struct Resource584 { char pad0[0x10]; Vec3 pos; };
struct Owner584 { char pad0[0x51c]; Resource584* resource; };
template<class T> struct BufferC {
    char pad0[0xc]; s32 num; s32 capacity; T* data;
    T& operator[](s32 i) { if((u32)i<(u32)num) return data[i]; return data[0]; }
};
struct Resource58A { void* value; };
struct Owner58A { char pad0[0x410]; BufferC<Resource58A>* resource; };
struct Virtual26 { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19(); virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24(); virtual void v25(); virtual void target(); };
struct Owner58D { char pad0[0x20]; Virtual26* child; };
struct Child58DA { char pad0[0xea]; u8 flags; };
struct Owner58DA { char pad0[0xa0]; Child58DA* child; };
struct Child556 { char pad0[0x168]; u8 enabled; char pad169[0x1bb]; u8 flags; };
struct Owner556 { char pad0[0x18]; Child556* child; };
struct RelEntry56F { s32 offset; u32 metadata; };
struct RelTable56F { u32 count; u32 reserved; RelEntry56F entries[1]; };
struct Owner56F { char pad0[0x14]; RelTable56F table; };
struct Child570 { char pad0[0x74]; u8 flags; };
struct Manager570 { char pad0[0x130]; Child570* child; };
template<class T,u32 N> struct SafeSlots {
    T values[N];
    T& operator[](u32 i){ if(i<N)return values[i];return values[0]; }
};
struct Owner57CB{char pad0[0x8a];s8 index;char pad8b[0xb1];SafeSlots<void*,4> slots;};
struct SafeString5532{virtual~SafeString5532(){}virtual void assureTermination()const;const char*text;SafeString5532(const char*t):text(t){};};
struct SoundObject29;
struct SoundHandle29;
struct SoundOwner29{char pad0[0x40];void*child;};
struct StateSlot29 { void* owner; s8 mode,current,pending; u8 gate7,gate8,gate9; u8 padA[2]; };
struct PlayerSlots29 { char pad[0x694]; StateSlot29 slots[3]; };
struct PlayerProxy29 { char pad[0x10]; PlayerSlots29* player; u32* flags; };
struct Owner584B { char pad[0x48]; u32 words[8]; };
extern u32 func_00120B44(u32);
static u32 word5(u32*p,u32 idx){return p[idx];}
bool f_00584B94(Owner584B* p,u32 value){const u32 bit=func_00120B44(value); u32* words=p->words;__schedule_barrier();u32 index5=bit>>5;u32 shift5=bit&31;u32 word=word5(words,index5); __schedule_barrier();if(word&(1u<<shift5))return true;return false;}
