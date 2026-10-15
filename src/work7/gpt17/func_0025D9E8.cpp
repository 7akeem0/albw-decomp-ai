// TaskBase ctor 0025D9E8, vtable006D6B1C, base constructor0048D088.
struct TaskParent {TaskParent(void*,const char*);virtual ~TaskParent();};
struct TaskBase:TaskParent {TaskBase(void*,const char*);virtual ~TaskBase();};
TaskBase::TaskBase(void* p,const char* n):TaskParent(p,n){}
