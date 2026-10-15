#include "range.h"
struct Base{virtual ~Base();};struct Single{struct D:Base{virtual ~D();};static Single*instance;static D*disposer;};Single*Single::instance=0;Single::D*Single::disposer=0;
Single::D::~D(){if(this==Single::disposer){Single::disposer=0;Single::instance=0;}}
