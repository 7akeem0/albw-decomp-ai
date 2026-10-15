

typedef unsigned int u32;
typedef int s32;
typedef unsigned char u8;
typedef float f32;
typedef unsigned short u16;
struct Vec4 { f32 x, y, z, w; };
struct Bits { u32 v; u16 hi() const { return v >> 16; } };
struct Bits2 { u32 lo:16; u32 hi:16; };
struct Elem3C { char pad[0xc]; Bits mC; char pad2[0x3c - 0x10]; };
struct Part { char pad[0x18]; Elem3C* m18; };
struct Res { char pad[0xc]; Part** mC; };
struct Obj {
    Res* m0;
    s32 m4;
    char pad8[0x190 - 8];
    s32 m190;
    s32 m194;
    u32 m198;
    char pad19c[0x22c - 0x19c];
    Vec4 m22c;
    u16 getFlags() const { s32 j = m194; const s32& i = m190; Part* p = m0->mC[i]; return *(const u32*)&p->m18[j].mC >> 16; }
    Part* part() const { return m0->mC[m190]; }
    u16 getFlags2() const { const Elem3C& e = part()->m18[m194]; return *(const u32*)&e.mC >> 16; }
};
struct Src { char pad[0x30]; u32 m30; };
struct ArgP { Src* s; Obj** o; };
struct Arg { char pad[0xc]; ArgP mP; };
void Ring2Dummy();
struct Entry { u32 id; Obj* obj; Vec4 v; };
struct Ring { Entry* buf; s32 cap; s32 head; s32 num;
  void push(u32 id, Obj* o, const Vec4& v);
  void push2(u32 id, Obj* o, const Vec4& v) { if (num >= cap) return; s32 n = num; num = n + 1; Entry* e = at(n); e->id = id; e->obj = o; e->v = v; }
  Entry* at(s32 n);
};
Entry* Ring::at(s32 n) { s32 i = n + head; if (i >= cap) i -= cap; return &buf[i]; }
void Ring::push(u32 id, Obj* o, const Vec4& v) { if (num >= cap) return; s32 n = num; num = n + 1; s32 i = n + head; if (i >= cap) i -= cap; Entry& e = buf[i]; e.id = id; e.obj = o; e.v = v; }

struct Mgr70A500 { char pad[0x48]; Ring ring; };
extern Mgr70A500* data_0070A500;
void func_00351FC0(u32 id, Obj* o);
struct X { void f(Arg* a); };
void X::f(Arg* a) {
    ArgP p = a->mP;
    Obj* o = *p.o;
    u32 id = p.s->m30;
    Vec4 v = o->m22c;
    func_00351FC0(id, o);
    if (o->m4 <= 0) return;
    u8 k = o->m198;
    if (k != 0 && k != 1 && k != 9) return;
    u16 h = o->getFlags();
    if (!(h & 2)) return;
    data_0070A500->ring.push2(id, o, v);

}
