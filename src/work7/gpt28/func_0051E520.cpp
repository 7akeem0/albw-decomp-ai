#include "range.h"
bool Object51E520::test() const {
    const FlagHolder51E5* holder=&holders[0];
    return !holder->child->first && !holder->child->second;
}
