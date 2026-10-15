struct P{char pad[20];void* f;};
extern "C" void g(void*);
void f_0028F2A8(P* p){ g(p->f); }
