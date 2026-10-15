struct Actor { char pad[0x71c]; unsigned short m71c; char pad2[1]; unsigned char m71f; };
struct T { char pad[0x2e4]; unsigned m2e4; };
void func_0030DCB0(void*);
Actor* func_0052FBA0(void*, unsigned);
extern void* data_00706E20;
void f(T* self){
  func_0030DCB0(self);
  char* m = *(char**)&data_00706E20;
  if (!m) return;
  Actor* a = func_0052FBA0(m + 0x3DBBC, self->m2e4);
  if (!a) return;
  a->m71f = 0;
  a->m71c = 0;
}
