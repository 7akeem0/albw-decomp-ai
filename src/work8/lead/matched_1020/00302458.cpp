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
extern void func_00150A84(unsigned, const SafeString_006F5980&, unsigned);
void func_00302458(unsigned a0)
{
  unsigned t1;
  *(float *)((char *)a0 + 0x3DC) = 0.0f;
  *(float *)((char *)a0 + 0x3E0) = 0.0f;
  *(float *)((char *)a0 + 0x3E4) = 0.0f;
  t1 = *(short *)((char *)a0 + 0x508);
  if ((int)t1 > 0) goto L2;
  func_00150A84(a0, SafeString_006F5980("SE_Crowly_V_DIE"), 0);
  return;
L2:;
  func_00150A84(a0, SafeString_006F5980("SE_Crowly_V_DAMAGE"), 0);
  return;
}

}
