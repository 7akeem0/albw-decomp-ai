typedef unsigned char u8;

struct V {
  virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
};

extern u8 ro_006F6C94[];

extern void func_0040959C(void*);
extern void func_0058FA08(void*);
extern void* func_004095FC(void*);
extern void func_0058FA5C(void*);

void func_00495C2C(void* self) {
void*vt=ro_006F6C94;void*secondary;*(void**)self=vt;secondary=ro_006F6C94+0x20;*(void**)((char*)self+0xc)=secondary;__memory_changed();
  if (*(u8*)((char*)self + 0x22c) != 0) {
    func_0040959C(self);
    *(u8*)((char*)self + 0x22c) = 0;
  }
  V* p = *(V**)((char*)self + 0x220);
  if (0 != p) {
    p->v3();
    *(void**)((char*)self + 0x220) = 0;
  }
  void* q = *(void**)((char*)self + 0x224);
  if (q != 0) {
    func_0058FA08(q);
    *(void**)((char*)self + 0x224) = 0;
  }
  self=func_004095FC(self);
  func_0058FA5C(self);
}
