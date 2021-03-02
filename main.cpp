#include <iostream>

bool foo_1(float &a,float &b){

    if(a + b <= 20 && a + b >= 10){
        //std::cout << "true"  << std::endl;
        return true;
    }
    else {
        //std::cout << "false" << std::endl;
        return false;
    }
}

int main(int argc, char const *argv[]) {


    /*
    1.Ќаписать программу,
    провер€ющую что сумма двух чисел
    лежит в пределах от 10 до 20 (включительно),
    если да Ц вывести true,
    в противном случае Ц false;
    */

    float a, b;

    a = 70;
    b = 8;

    std::cout
    << foo_1(a,b)
    <<
    std::endl;


    return 0;
}
