struct H { char pad[244]; void* m; };
void body(void*);
void fwd(H* p){ body(p->m); }
