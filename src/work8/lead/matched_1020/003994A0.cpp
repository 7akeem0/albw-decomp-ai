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
extern void func_001509A4(unsigned, const SafeString_006F5980&, unsigned);
void func_003994A0(unsigned a0)
{
  unsigned t1;
  t1 = *(signed char *)((char *)a0 + 0xC);
  if ((int)t1 < 2) goto L2;
  func_001509A4(*(unsigned *)((char *)a0 + 4), SafeString_006F5980("SE_PL_Net_SWING_Lv2"), 0);
  return;
L2:;
  func_001509A4(*(unsigned *)((char *)a0 + 4), SafeString_006F5980("SE_PL_Net_SWING"), 0);
  return;
}

}
