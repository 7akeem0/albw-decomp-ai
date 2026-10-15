typedef float f32;
struct Inner { char pad[0x130]; f32 v; };
struct Mid { char pad[0x604]; Inner* p604; };
struct Obj341 { char pad[0x10]; Mid* m10; };
extern void setConst_00341230(Inner*);
void func_00341220(Obj341* o) { setConst_00341230(o->m10->p604); }
