typedef unsigned int u32; typedef unsigned char u8;
struct Node { char pad[24]; u32 flags; };
struct Flags { char pad[13]; u8 d,e; };
struct Self {char pad[84];struct Flags* p;short kind;char pad5a[38];struct Node* n80;char pad84[4];void* p88;char pad8c[76];struct Node* nd8;char paddc[8];struct Node* ne4;char pade8[4];void* pec;char padf0[8];struct Node* nf8;};
extern void FUN_0012c790(void*); extern int FUN_005737f8(struct Node*);
void FUN_0051c54c(struct Self* s){
FUN_0012c790(s->pec);FUN_0012c790(s->p88);
if(s->n80){ if(s->kind!=3 || !s->p || (!s->p->d && !s->p->e)){if(!FUN_005737f8(s->n80))goto done;} s->n80->flags |=64; }
done:if(s->ne4)s->ne4->flags|=64;
if(s->nf8)s->nf8->flags|=64;
if(s->nd8)s->nd8->flags|=64;
}