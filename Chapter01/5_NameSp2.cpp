#include <iostream>

namespace BestComImpl{
    void SimpleFunc(void);
}
namespace ProgComImpl{
    void SimpleFunc(void);
}

int main(void){
    BestComImpl::SimpleFunc();
    ProgComImpl::SimpleFunc();
    return 0;
}

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
