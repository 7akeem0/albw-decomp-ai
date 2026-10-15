#include "range.h"
StandaloneHandle26::~StandaloneHandle26(){
    if(value){closeHandle26(value);value=0;}
}
