#include "range.h"
struct OwnerBase { void* owner; OwnerBase() : owner(0) {} };
struct RuntimeC908 : OwnerBase {
    virtual ~RuntimeC908();
    void* first;
    void* second;
    void* third;
    void* fourth;
    RuntimeC908();
};
RuntimeC908::RuntimeC908() : first(0),second(0),third(0),fourth(0) {}
