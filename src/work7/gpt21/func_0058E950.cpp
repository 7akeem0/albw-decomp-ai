#include "range.h"
struct Primary58E { virtual ~Primary58E() {} };
struct Disposer58E { virtual ~Disposer58E(); };
struct Derived58E : Primary58E,Disposer58E { virtual ~Derived58E(); };
Derived58E::~Derived58E() {}
