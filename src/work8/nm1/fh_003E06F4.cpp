struct H { char pad[4]; void* m; };
void body(void*);
void fwd(H* p){ body(p->m); }
