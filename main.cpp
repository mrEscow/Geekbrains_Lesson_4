#include <iostream>

bool foo_1(float &a,float &b){

    if(a + b <= 20 && a + b >= 10)
        return true;
    else
        return false;

}


bool foo_2(int &number){

    for(int i=2;i<= number/2;i++)
            if( (number%i) == 0 ) return 0;
return 1;
}

bool foo_3(int &a, int &b){

    if (a + b == 10 || a == 10 || b == 10)
        return true;
    else
        return false;
}

int main(int argc, char const *argv[]) {
    /*
    1.�������� ���������,
    ����������� ��� ����� ���� �����
    ����� � �������� �� 10 �� 20 (������������),
    ���� �� � ������� true,
    � ��������� ������ � false;
    */

    float a, b;

    a = 70;
    b = 8;

    std::cout
    << foo_1(a,b)
    <<
    std::endl;

    /*
    2.�������� ���������,
    �����������,
    �������� �� ��������� ����� - ����������� �������.
    ������� ����� - ��� �����,
    ������� ������� ��� ������� ������ �� ������� � ���� ����.
    */
    int number {9};

    foo_2(number)?

        std::cout
        << "number "
        << number
        << " prostoe"
        <<
        std::endl

    :

        std::cout
        << "number "
        << number
        << " ne prostoe"
        <<
        std::endl;
    /*
    3.�������� ���������,
    ��������� �� ����� �������, ���� ��� ������������� ���������,
    ����������� � � ������ ���� ����� ������ ���� �� ����,
    ���� �� ����� ����� ������.*/

    int a1 = 3;
    int b1 = 7;

    std::cout
    << foo_3(a1,b1)
    <<
    std::endl;


    return 0;
}
