struct P{char pad[20];void* f;};
extern "C" void g(void*);
void f_0053FF30(P* p){ g(p->f); }
