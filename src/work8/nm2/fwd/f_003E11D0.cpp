struct P{char pad[104];void* f;};
extern "C" void g(void*);
void f_003E11D0(P* p){ g(p->f); }
