struct P{char pad[4];void* f;};
extern "C" void g(void*);
void f_0040D014(P* p){ g(p->f); }
