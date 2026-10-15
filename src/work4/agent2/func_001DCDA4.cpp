// 0x1DCDA4  Cls::func_001DCDA4()  -- reached only by fall-through from 0x1DCD9C (Mgr711010::m14->...)
typedef unsigned char u8;
typedef signed char s8;

class Cls;
struct Obj604;

struct Part {
    virtual void vf0();
    virtual void vf4();
    virtual void vf8();
    virtual void vfC();
};

struct Sys10 {
    virtual void vf0();
    virtual void vf4();
    virtual bool vf8();
};

struct Mgr711010 {
    char pad[0x10];
    Sys10* m10;
    Cls* m14;
};
extern Mgr711010* data_00711010;

struct Anim { char pad[0x20]; };
void func_0028D7DC(Anim* a);

struct Model {
    char pad[0x3c];
    Anim m3c;
    Anim m5c;
};

struct Actor;
void func_002914B0(Actor* a);
void func_00341290(Obj604* o, s8 v);
bool func_003459C8(Sys10* s);

class Cls {
public:
    void func_001DCDA4();
    char pad[0x600];
    Model* m600;
    Obj604* m604;
    char pad608[0x614 - 0x608];
    Actor* m614;
    char pad618[0x630 - 0x618];
    Part* m630[25];
    char pad694[0x6be - 0x694];
    s8 m6be;
};

void Cls::func_001DCDA4() {
    m6be = data_00711010->m10->vf8();
    if (m6be) {
        for (int i = 0; i < 25; i++)
            m630[i]->vfC();
    }
    func_00341290(m604, m6be);
    if (func_003459C8(data_00711010->m10)) {
        func_0028D7DC(&m600->m3c);
        func_0028D7DC(&m600->m5c);
    }
    func_002914B0(m614);
}
