typedef int s32;
typedef unsigned int u32;
struct Setter { char pad[0x20]; };
struct Mid31 { char pad[0x5fc]; Setter* q5fc; };
struct Obj31 { char pad[0x10]; Mid31* m10; };
extern void setter_0031E30C(Setter*);
void func_0031E300(Obj31* o) { setter_0031E30C(o->m10->q5fc); }
