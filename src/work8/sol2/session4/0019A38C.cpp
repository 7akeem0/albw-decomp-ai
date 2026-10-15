typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32;
struct T;
s32 func_0052F210(T* t);                          
s32 func_00588224(void* snd, s32 id, s32 a);      
void func_001E01A8(T* t, s32 a);
void ctx_0019A38C_2(T* a0,s32 a1);
                  
extern void* data_00711F50;
struct ListNode { ListNode* mPrev; ListNode* mNext; };
struct Ring{ListNode node;u32 count;s32 offset;};
struct C {
    char pad0[0x28];
    Ring ring;
    char pad1[0x48 - 0x38];
    u8 m48;
    void f();
};
void C::f() {
    if (!m48)
        return;
    if (!ring.count)
        return;
Ring*x=&ring;ListNode*next=ring.node.mNext;s32 off=ring.offset;char*it=(char*)next-off;__memory_changed();char*end=(char*)x-x->offset;for(;it!=end;){
        s32 id = func_0052F210((T*)it);
        if (func_00588224(data_00711F50, id, 0x4000000) == 0)
            ctx_0019A38C_2((T*)it, 1);
        it = (char*)((ListNode*)(it + off))->mNext - off;
    }
}



void ctx_0019A38C_2(T* a0,s32 a1){func_001E01A8(a0,a1);}
