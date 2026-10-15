struct H { char pad[64]; void* m; };
void body(void*);
void fwd(H* p){ body(p->m); }
