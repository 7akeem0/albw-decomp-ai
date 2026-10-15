typedef unsigned char u8;
typedef unsigned int u32;

struct Singleton {
  u32 m0;
  u32 m4;
};

extern Singleton data_00709F30;
extern u8 ro_006F8060[];
extern void* operator new[](u32 size, void* heap, int align);
extern void* func_0010DA7C(void*, void*, int);
extern u32 func_004C78E4(void*);

void func_004C6668(void* heap) {
  if (data_00709F30.m0 != 0) return;
  char* p = (char*)operator new[](0x5b4, heap, 4);
  void* o = p + 0x504;
  if (o != 0) {
    void* h=heap; int k=3; o=func_0010DA7C(o,h,k);
    *(void**)o = ro_006F8060;
  }
  data_00709F30.m4 = (u32)o;
  if (p != 0) {
    data_00709F30.m0 = func_004C78E4(p);
  } else {
    data_00709F30.m0 = 0;
  }
}
