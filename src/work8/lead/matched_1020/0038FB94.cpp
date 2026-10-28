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
extern char data_00709DF8[];
extern char data_00711F50[];
extern char data_00712718[];
extern unsigned func_00588BF0(unsigned, unsigned);
extern unsigned func_00667F14(unsigned, unsigned);
extern unsigned func_00297298(unsigned, unsigned);
extern void func_00259354(unsigned, const SafeString_006F5980&, unsigned);
void func_0038FB94(unsigned a0)
{
  unsigned k1, t1, t7;
  t1 = func_00588BF0(a0, 0);
  if (t1 != 0) {
    func_00667F14((a0 + 0x400) + 0xC, 1);
    k1 = (unsigned)data_00711F50;
    func_00297298(*(unsigned *)((char *)k1), 0xF);
    if (*(unsigned char *)((char *)*(unsigned *)((char *)data_00709DF8) + 0x18) != 25u) {
      return;
    }
    t7 = *(unsigned *)((char *)data_00712718);
    func_00259354(*(unsigned *)((char *)k1), SafeString_006F5980((const char *)(t7)), 0x2D);
  }
  return;
}

}
