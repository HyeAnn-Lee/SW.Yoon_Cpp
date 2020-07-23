#include <iostream>
#include "hd.h"

namespace BestComImpl{
    void SimpleFunc(void){
        std::cout << "func defined by BestCom\n";
    }
}

namespace ProgComImpl{
    void SimpleFunc(void){
        std::cout << "func defined by ProgCom\n";
    }
}
