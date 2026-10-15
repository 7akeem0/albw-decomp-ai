typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32;
typedef struct TypeInfo { const void* vt; } TypeInfo;
extern u32 G_00727650;
extern TypeInfo G_00727654;
extern const char G_006F6608[];
int __cxa_guard_acquire(u32*);
void __cxa_guard_release(u32*);
typedef struct Sub Sub;
struct SubVt { char pad[0x18]; s32 (*f18)(Sub*); s32 (*f1c)(Sub*); };
struct Sub { struct SubVt* vt; };
typedef struct Obj Obj;
typedef struct ObjVt { void* v0; int (*checkDerived)(Obj*, const TypeInfo*); } ObjVt;
struct Obj { ObjVt* vt; Sub* m4; char pad[0x10]; u8 m18; };
void func_00408254(s32 a, s32 b, s32 c);
void func_004082C8(s32 a, s32 b, s32 c);
void func_00408368(s32 a, s32 b);
void func_004083B0(s32 a, s32 b);
void func_004083F8(s32 a, s32 b);

static const TypeInfo* getTI(void) {
    if (!(G_00727650 & 1) && __cxa_guard_acquire(&G_00727650)) {
        { TypeInfo* t = &G_00727654; t->vt = G_006F6608; }
        __cxa_guard_release(&G_00727650);
    }
    return &G_00727654;
}
static int isDerived(Obj* a) {
    const TypeInfo* ti = getTI();
    return a && a->vt->checkDerived(a, ti);
}
static Obj* dynCast(Obj* a) {
    if (isDerived(a)) return a;
    return 0;
}

static s32 toMode(s32 kind) { s32 mode = 0; if (kind != 0) { if (kind == 1) mode = 1; } return mode; }
void func_0048F0B0(void* self, s32 kind, Obj* o)
{
    s32 mode;
    u8 type;
    s32 v;
    mode = toMode(kind);
    type = dynCast(o)->m18;
    
    v = o->m4->vt->f18(o->m4);
    
    switch (type) {
    case 3: func_004083B0(mode, v); return;
    case 4: func_00408368(mode, v); return;
    case 5: func_004082C8(mode, v, o->m4->vt->f1c(o->m4)); return;
    case 6: func_00408254(mode, v, o->m4->vt->f1c(o->m4)); return;
    default: func_004083F8(mode, v); return;
    }
}
