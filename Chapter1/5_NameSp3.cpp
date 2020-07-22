#include <iostream>

namespace BestComImpl{
    void SimpleFunc(void);
}
namespace BestComImpl{
    void PrettyFunc(void);
}
namespace ProgComImpl{
    void SimpleFunc(void);
}

int main(void){
    BestComImpl::SimpleFunc();
    return 0;
}

namespace BestComImpl{
    void SimpleFunc(void){
        std::cout << "func defined by BestCom\n";
        PrettyFunc();
        ProgComImpl::SimpleFunc();
    }
}

namespace BestComImpl{
    void PrettyFunc(void){
        std::cout << "So Pretty!!\n";
    }
}

namespace ProgComImpl{
    void SimpleFunc(void){
        std::cout << "func defined by ProgCom\n";
    }
}
