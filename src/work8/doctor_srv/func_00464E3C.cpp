typedef unsigned char u8;
typedef signed char s8;
typedef int s32;
typedef unsigned int u32;
typedef float f32;

struct Cls;
struct Timeline { void func_00352210(bool, f32); };
struct State {
    typedef void (Cls::*Func)();
    u32 counter; s8 cur, next; u8 num, pad; char p[8];
    Timeline* timeline; Cls* owner; Func* enter; Func* exec; Func* exit;
    void update() { (owner->*exec[cur])(); ++counter; if (timeline) timeline->func_00352210(true, (f32)counter); }
};
struct Obj { u8 pad[0x74]; u8 m74[0x3c]; u32 mB0; };

struct Cls {
    u8 padE0[0xe0];
    State mState;
    u8 pad104[0x108 - 0x104];
    Obj* objects[4];
    u8 pad118[0x11];
    s8 type;
    Obj*& objectAt(u32 i) {
        Obj** p = objects;
        if (i < 4)
            p += i;
        return *p;
    }
    void update();
};

extern void* data_0070FB60;
extern int func_0055696C(void*, u32);
extern void func_002316CC(void*, f32);
extern void func_00466C40(Cls*);

void Cls::update() {
    mState.update();
    func_00466C40(this);
    for (unsigned int i = 0; (int)i < 4; ++i) {
        if (!objectAt(i))
            continue;
        if (objectAt(i)->mB0 != type)
            continue;
        Obj* obj = objectAt(i);
        int kind = func_0055696C(data_0070FB60, 0x1f);
        f32 value = kind == 3 ? 1.0f : (kind == 4 ? 2.0f : 0.0f);
        f32 value_c67 = value;
        func_002316CC(obj->m74, value_c67);
    }
}
