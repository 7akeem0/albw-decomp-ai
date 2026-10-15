#include "range.h"
 void target(TreeNode22*p,TreeCallback22*callback){if(p->left)target(p->left,callback);callback->invoke(p);if(p->right)target(p->right,callback);}
