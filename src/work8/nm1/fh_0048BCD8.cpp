struct H { char pad[36]; void* m; };
void body(void*);
void fwd(H* p){ body(p->m); }
