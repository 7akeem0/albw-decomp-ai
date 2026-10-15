struct P{char pad[4];void* f;};
extern "C" void g(void*);
void f_0040C85C(P* p){ g(p->f); }
