struct H { char pad[44]; void* m; };
void body(void*);
void fwd(H* p){ body(p->m); }
