#include <iostream>

void swap(int* pNum1, int* pNum2){
    int temp = *pNum2;
    *pNum2 = *pNum1;
    *pNum1 = temp;
}

void swap(char* pCh1, char* pCh2){
    char temp = *pCh2;
    *pCh2 = *pCh1;
    *pCh1 = temp;
}

void swap(double* pDbl1, double* pDbl2){
    double temp = *pDbl2;
    *pDbl2 = *pDbl1;
    *pDbl1 = temp;
}

int main(void){
    int num1=20, num2=30;
    swap(&num1, &num2);
    std::cout << num1 << ' ' << num2 << std::endl;

    char ch1 = 'A', ch2 = 'Z';
    swap(&ch1, &ch2);
    std::cout << ch1 << ' ' << ch2 << std::endl;

    double dbl1=1.1111, dbl2=5.5555;
    swap(&dbl1, &dbl2);
    std::cout << dbl1 << ' ' << dbl2 << std::endl;

    return 0;
}
