#include <iostream> 
#include<iomanip> //For precision

int main(){
    float number1 {1.12345678901234567890f};
    double number2 {1.12345678901234567890};
    long double number3 {1.12345678901234567890L};

    std::cout << "Size of float : " << sizeof(float) << std::endl;
    std::cout << "Size of double : " << sizeof(double) << std::endl;
    std::cout << "Size of long double : " << sizeof(long double) << std::endl;

    //Precision
    std::cout << std::setprecision(20); // Control the precision from std::cout.
    std::cout << "number1 is : " << number1 << std::endl; //Reps 7 values accurately, the rest are garbage values
    std::cout << "number2 is : " << number2 << std::endl; // 15 values
    std::cout << "number3 is : " << number3 << std::endl; // 15+ values

    //Float problems : The precision is usually too limited
    //float number4 = 192400023.0f;// Error : narrowing conversion when storing floating point numbers
    //double number4 = 192400023.0f;//Suffix is still 'f' regardless of changing datatype hence the same error
    double number4 = 192400023.0;//Correct version
    std::cout << "number4 : " << number4 << std::endl;

    //Scientific notation - For large numbers
    std::cout << "-------------------------" << std::endl;
    
    double number5 {192400023};
    double number6 {1.92400023e8};
    double number7 {1.924e8};
    double number8 {0.00000000003498};
    double number9 {3.498e-11}; // multiply with 10 exp(-11)
    
    std::cout << "number5 is : " << number5 << std::endl;
    std::cout << "number6 is : " << number6 << std::endl;
    std::cout << "number7 is : " << number7 << std::endl;
    std::cout << "number8 is : " << number8 << std::endl;
    std::cout << "number9 is : " << number9 << std::endl;

    //Infinity and Nan
    std::cout << std::endl;
    std::cout << "Infinity and NaN" << std::endl;
    
    //double number10{5.6};
    double number10{-5.6};
    double number11{};//Initialized to 0
    double number12{};

    //Infinity
    double result { number10 / number11 };
    
    std::cout << number10 << "/" << number11 << "  yields " << result << std::endl;
    std::cout << result << " + " << number10 << " yields " << result + number10 << std::endl;
    
    //NaN
    result = number11 / number12;
    
    
    std::cout << number11 << "/" << number12 << " = " << result << std::endl;

    return 0; 
}
