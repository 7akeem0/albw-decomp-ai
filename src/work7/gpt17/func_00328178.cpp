#include "range.h"
struct Base_004A1520 {virtual ~Base_004A1520();u8 pad[0x10-4];};
struct Single {struct Disposer;static void*instance;static Disposer*disposer;};
struct Single::Disposer:Base_004A1520 {virtual ~Disposer();};
void*Single::instance;Single::Disposer*Single::disposer;
Single::Disposer::~Disposer(){if(this==disposer){disposer=0;instance=0;}}
