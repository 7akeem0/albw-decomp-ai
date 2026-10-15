

typedef unsigned char u8;
typedef signed char s8;
typedef unsigned short u16;
typedef short s16;
typedef unsigned int u32;
typedef int s32;
typedef float f32;

struct Control2317 { u16 current, max; u32 pad4, param; };

struct Flag16 {
    u16 v;
    Flag16(){}
    Flag16(u16 n):v(n){}
    void reset(u16 mask){*this = Flag16((u16)(v & ~mask));}
    void set(u16 mask){*this = Flag16((u16)(v | mask));}
};

struct Vec3 { f32 x,y,z; void setZero(){ for(s32 i=0;i<3;++i)(&x)[i]=0.f; } };

struct Flag32 {
    u32 v;
    void change(u32 mask, bool on) { if (on) v |= mask; else v &= ~mask; }
    void set(u32 mask) { change(mask, true); }
    void reset(u32 mask) { change(mask, false); }
};
void* func_0049F688(void* list);
void func_0010F1DC(void* list, void* node);
u32 func_002DEB3C(char* self) {
    if (*(u32*)(self + 0x1c) == 0) return 0;
    char* obj; char* l2;
    char* l1 = self + 0x14;
    char* front = (char*)func_0049F688(l1);
    if (front == 0) goto fail;
    obj = front - *(u32*)(l1 + 0xc);
    if (obj == 0) goto fail;
    l2 = self + 0x24;
    func_0010F1DC(l2, *(u32*)(l2 + 0xc) + obj);
    *(u32*)(l2 + 8) += 1;
    return (u32)obj;
fail: return 0;
}
