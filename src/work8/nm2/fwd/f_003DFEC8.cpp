struct P{char pad[4];void* f;};
extern "C" void g(void*);
void f_003DFEC8(P* p){ g(p->f); }
