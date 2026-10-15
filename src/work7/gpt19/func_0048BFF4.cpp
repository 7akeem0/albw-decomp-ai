#include "range.h"
struct B{virtual~B();};struct S:B{virtual~S();static void*instance;static S*disposer;};void*S::instance=0;S*S::disposer=0;
S::~S(){if(this==disposer){disposer=0;instance=0;}}
