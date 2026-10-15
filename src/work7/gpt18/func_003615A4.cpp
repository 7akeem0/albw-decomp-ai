#include "range.h"
struct B{virtual~B();char pad[12];};struct O:B{virtual~O();static void*instance;static O*disposer;};void*O::instance=0;O*O::disposer=0;O::~O(){if(this==disposer){disposer=0;instance=0;}}
