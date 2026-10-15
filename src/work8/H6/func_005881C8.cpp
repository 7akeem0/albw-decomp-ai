// 0x5881C8: obj->vslot2(); v = obj->m4; a = f57F260(self->m24->m140); b = f56D3E4(a, v);
//           c = f57F260(self->m24->m140); d = f569884(c, b); return (d & mask) != 0;
typedef unsigned int u32;
typedef unsigned char u8;

struct Inner88 {
    u8 pad0[0x140];
    void* m140;
};

struct Self88 {
    u8 pad0[0x24];
    Inner88* m24;
};

struct Obj88 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    u32 m4;
};

void* func_0057F260(void* p);
u32 func_0056D3E4(void* p, u32 v);
u32 func_00569884(void* p, u32 v);

bool func_005881C8(Self88* self, Obj88* obj, u32 mask)
{
    obj->v2();
    u32 v = obj->m4;
    void* a = func_0057F260(self->m24->m140);
    u32 b = func_0056D3E4(a, v);
    void* c = func_0057F260(self->m24->m140);
    u32 d = func_00569884(c, b);
    return (d & mask) != 0;
}
