struct H { char pad[76]; void* m; };
void body(void*);
void fwd(H* p){ body(p->m); }
