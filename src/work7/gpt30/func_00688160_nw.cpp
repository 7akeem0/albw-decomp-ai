#include "range.h"
struct TreeNode30 {u32 value;TreeNode30* left;TreeNode30* right;};
struct TreeCallbackOwner30;
typedef void(TreeCallbackOwner30::*TreeMethod30)(TreeNode30*);
struct TreeCallback30 {
    virtual ~TreeCallback30();
    TreeCallbackOwner30* owner;
    TreeMethod30 method;
    void invoke(TreeNode30* p){if(owner&&method)(owner->*method)(p);}
};
 void target(TreeNode30*p,TreeCallback30* callback){
    if(p->left)target(p->left,callback);
    callback->invoke(p);
    if(p->right)target(p->right,callback);
}
