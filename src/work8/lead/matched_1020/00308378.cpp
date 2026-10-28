typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

class SafeString_006F5980 {
public:
    SafeString_006F5980(const char* s) : mStringTop(s) {}
    virtual void assureTerminationImpl_() const;
    const char* mStringTop;
};
extern "C" {
extern void func_001507D8(unsigned, const SafeString_006F5980&, unsigned);
extern unsigned func_00588BF0(unsigned, unsigned);
extern unsigned func_00664B0C(unsigned, unsigned);
void func_00308378(unsigned a0)
{
  unsigned t1;
  func_001507D8(a0, SafeString_006F5980("SE_Barrier_EXIST"), 0);
  t1 = func_00588BF0(a0, 0);
  if (t1 != 0) {
    *(unsigned char *)((char *)a0 + 0x560) = 3;
    func_00664B0C((a0 + 0x400) + 0xC, 1);
  }
  return;
}

}
