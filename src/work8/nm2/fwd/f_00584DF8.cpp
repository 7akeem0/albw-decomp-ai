struct P{char pad[16];void* f;};
extern "C" void g(void*);
void f_00584DF8(P* p){ g(p->f); }
