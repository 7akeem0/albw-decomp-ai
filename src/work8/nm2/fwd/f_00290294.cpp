struct P{char pad[20];void* f;};
extern "C" void g(void*);
void f_00290294(P* p){ g(p->f); }
