extern signed char g[];
void func_001080D4(void*);
void f(){
  if (g[0] & g[1]) {
    g[3] = 1;
    g[1] = 0;
    g[2] = 0;
    unsigned z=0; __asm { mcr p15,0,z,c7,c10,4 }
    func_001080D4(&g[8]);
  }
}
