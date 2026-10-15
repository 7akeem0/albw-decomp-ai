typedef unsigned char u8;
struct Child { virtual void v0();virtual void v1();virtual void v2();virtual void v3();virtual void v4();virtual void v5();virtual void v6();virtual void apply(); };
struct M { char pad[0x10]; Child* child; char gap[0x38]; u8 flag; void run(){ flag=1; child->apply(); } };
void f(M* m){ m->run(); }
