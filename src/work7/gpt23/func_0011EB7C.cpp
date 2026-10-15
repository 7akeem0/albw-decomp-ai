#include "range.h"
extern "C" void func_0011EBA8(void*,const char*);
extern "C" void func_0011EB7C(TextOwner* p,const SafeStringView& string) {
    string.assureTermination();
    func_0011EBA8(p->child,string.text);
}
