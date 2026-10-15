typedef unsigned int u32;
typedef int s32;

struct Sub { char p0[8]; u32 m8; };
struct Cnt { char p0[8]; s32 m8; };
struct Ent60 {
    Sub* m0;
    char p1[60 - 4];
};
struct Obj {
    char p0[0xc];
    Cnt* m0c;
    u32 m10;
    char p1[4];
    Ent60* m18;
};

s32 func_0010FBAC(u32 a, u32 b);
s32 ctx_00564908_0(u32 const& a0,u32 a1);


Sub*read4(const Ent60*p){return p->m0;}Sub*read4ref(const Ent60*const&p){return p->m0;}
extern "C" s32 func_00564908(Obj* self, u32 a) {
    for (s32 i = 0; i < self->m0c->m8; i++) {
        Ent60*base=self->m18;u32 k=i*15;Ent60*entry;__asm{add entry,base,k,lsl#2}Sub*s=entry->m0;
        if (ctx_00564908_0(a, self->m10 + s->m8) == 0) return i;
    }
    return -1;
}

s32 ctx_00564908_0(u32 const& a0,u32 a1){return func_0010FBAC(a0,a1);}
