struct H { char pad[24]; void* m; };
void body(void*);
void fwd(H* p){ body(p->m); }
