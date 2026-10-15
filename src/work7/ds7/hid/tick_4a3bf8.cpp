struct E { unsigned char active; char pad[0x9b]; int count; };
struct G { E e[6]; int m3c0; int m3c4; };
void f(G* g){
  if (g->m3c4 != 0) return;
  if (g->m3c0 <= 0) return;
  for (int i=0;i<6;i++){
    E* e = &g->e[i];
    if (e->active) {
      e->count++;
      if (g->m3c0 <= e->count) e->active = 0;
    }
  }
}
