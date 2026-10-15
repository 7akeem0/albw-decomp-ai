struct P{char pad[20];void* f;};
extern "C" void g(void*);
void f_002918D8(P* p){ g(p->f); }
