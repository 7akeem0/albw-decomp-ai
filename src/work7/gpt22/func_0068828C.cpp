#include "range.h"
struct SafeOpaque22{const char*text;SafeOpaque22(const char*p):text(p){}virtual~SafeOpaque22(){}virtual void assureTerminationImpl_()const;const char*cstr()const{assureTerminationImpl_();return text;}};
struct Base_0048E140{virtual void v();u8 pad[0x1e8];Base_0048E140(FactoryArg22*,const char*);};
struct FaderNone22:Base_0048E140{FaderNone22(FactoryArg22*p):Base_0048E140(p,SafeOpaque22("FaderNone").cstr()){}};
FaderNone22*target(FactoryArg22*p){return new((Heap22*)p->list->heaps[p->list->index],4)FaderNone22(p);}
