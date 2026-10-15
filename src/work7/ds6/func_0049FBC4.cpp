typedef unsigned char u8;

struct Node {
  void* m0;
  void* m4;
  Node* m8;
  Node* mc;
};

struct List {
  u8 pad[4];
  Node* first;
};

extern void func_0049FB60(Node*);

void func_0049FBC4(List* self, Node* n) {
  func_0049FB60(n);
  Node* p = self->first;
  if (p == 0) {
    self->first = n;
    n->m0 = self;
    return;
  }
  func_0049FB60(n);
  while (p->m8 != 0) p = p->m8;
  p->m8 = n;
  n->mc = p;
  n->m0 = p->m0;
}
