#include "en213.h"
void En::func_0021319C(s32 b) {
    if (m40c) {
        Node* n1 = func_00584C14(m40c, "GueldMan1");
        Node* n2 = func_00584C14(m40c, "GueldMan1_face");
        Node* n3 = func_00584C14(m40c, "GueldMan2");
        if (b) {
            func_004CEA18(m40c, true, n1);
            func_004CEA18(m40c, true, n2);
            func_004CEA18(m40c, false, n3);
        } else {
            func_004CEA18(m40c, false, n1);
            func_004CEA18(m40c, false, n2);
            func_004CEA18(m40c, true, n3);
        }
    }
}
