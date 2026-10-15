struct H { char pad[240]; void* m; };
void body(void*);
void fwd(H* p){ body(p->m); }
