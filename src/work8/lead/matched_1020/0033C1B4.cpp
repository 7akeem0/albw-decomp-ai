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
extern char data_00711F50[];
extern unsigned func_0058791C(unsigned, const SafeString_006F5980&);
extern void func_00150A84(unsigned, const SafeString_006F5980&, unsigned);
extern unsigned func_00665E08(unsigned, unsigned);
unsigned func_0033C1B4(unsigned a0)
{
  unsigned h901, r0, t2, t5;
  t2 = *(signed char *)((char *)(a0 + 0x400) + 0x10);
  r0 = t2;
  if ((t2 != 1) && (t2 != 3)) {
    r0 = 0;
  }
  if ((t2 == 1) || (t2 == 3)) {
    t5 = func_0058791C(*(unsigned *)((char *)data_00711F50), SafeString_006F5980("SE_LightArrow_DAMAGE"));
    h901 = t5 ^ 1;
    if (h901 != 0) {
      func_00150A84(a0, SafeString_006F5980("SE_LightArrow_REFLECT"), 0);
    }
    func_00665E08((a0 + 0x400) + 0xC, 4);
    r0 = 1;
  }
  return r0;
}

}
