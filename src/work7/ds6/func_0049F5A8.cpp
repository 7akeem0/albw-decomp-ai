typedef unsigned char u8;
typedef unsigned int u32;
typedef signed int s32;

namespace sead {
struct ListNode { ListNode* mPrev; ListNode* mNext; void erase_(); };
struct ListImpl { ListNode mStartEnd; s32 mCount; };
template <class T> struct OffsetList : ListImpl {
  s32 mOffset;
  ListNode* objToListNode(T* o) const { return (ListNode*)((char*)o + mOffset); }
  T* listNodeToObj(ListNode* n) const { return (T*)((char*)n - mOffset); }
};
}

struct Obj;
extern void func_001DFE4C(Obj*);

struct Obj : sead::OffsetList<Obj> {
};

extern void func_0049F5FCb(Obj*);
void func_0049F5A8(Obj* self) {
  if (self->mCount != 0) {
    s32 off = self->mOffset;
    Obj* end = (Obj*)((char*)&self->mStartEnd - off);
    Obj* o = (Obj*)((char*)self->mStartEnd.mNext - off);
    while (o != end) {
      func_001DFE4C(o);
      sead::ListNode* n = (sead::ListNode*)((char*)o + off);
      o = (Obj*)((char*)n->mNext - off);
    }
  }
  func_0049F5FCb(self);
}

