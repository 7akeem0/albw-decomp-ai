#include "range.h"
struct DisposerBaseA134 {virtual ~DisposerBaseA134();};
struct DisposerA134:DisposerBaseA134 {virtual ~DisposerA134();};
extern void* data_00714F90;
extern "C" void sub_0048E620(void*,DisposerA134*);
void* managerA134(){return data_00714F90;}
DisposerA134::~DisposerA134(){void*m=managerA134();if(m)sub_0048E620(m,this);}
