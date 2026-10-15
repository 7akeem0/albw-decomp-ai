struct H { char pad[56]; void* m; };
void body(void*);
void fwd(H* p){ body(p->m); }
