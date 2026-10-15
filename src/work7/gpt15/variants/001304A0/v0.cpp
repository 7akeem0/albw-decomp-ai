#include "../../range.h"
struct Instance{virtual void destroy();};struct Base_004A1520{u8 pad[12];virtual ~Base_004A1520();};struct S:Base_004A1520{static Instance*instance;static S*disposer;virtual ~S();};Instance*S::instance;S*S::disposer;S::~S(){if(this==disposer){disposer=0;instance->destroy();instance=0;}}

