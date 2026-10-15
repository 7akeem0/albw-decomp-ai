struct P{char pad[4];void* f;};
extern "C" void g(void*);
void f_003DFEE8(P* p){ g(p->f); }
