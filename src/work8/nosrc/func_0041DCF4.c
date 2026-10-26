typedef struct N { void* prev; void* next; } N;
struct R { unsigned cap; N n; void* y; };
void f(struct R* s, unsigned n) {
    s->cap=0; s->n.next=&s->n.next; s->n.prev=0; s->y=s->n.next; if(n) return;
}
