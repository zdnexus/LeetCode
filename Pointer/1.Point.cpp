//
// Created by Administrator on 2017/1/10 0010.
//
#include <iostream>

using namespace std;

//  int *p -> int/const int
void A() {
    //  ָ�� int �� p ָ��ָ�� x��int��
    cout << "ָ�� int �� p ָ��ָ�� x��int��" << endl;
    int x = 0;
    int *p = &x;
    cout << "x:     " << x << endl;
    cout << "*p:    " << *p << endl;
    cout << "&x:    " << &x << endl;
    cout << "p:     " << p << endl;
    cout << "&p:    " << &p << endl;



    //  �޸� x ��ֵ
    cout << "x��int�� = 1" << endl;
    x = 1;
    cout << "x:     " << x << endl;
    cout << "*p:    " << *p << endl;
    cout << "&x:    " << &x << endl;
    cout << "p:     " << p << endl;
    cout << "&p:    " << &p << endl;



    //  �޸� p ָ��ָ���ַ��ֵ
    cout << "*p = 2" << endl;
    *p = 2;
    cout << "x:     " << x << endl;
    cout << "*p:    " << *p << endl;
    cout << "&x:    " << &x << endl;
    cout << "p:     " << p << endl;
    cout << "&p:    " << &p << endl;



    //  �ٴ��޸� p ָ��ָ���ַ��ֵ
    cout << "*p = *p + 1" << endl;
    *p = *p + 1;
    cout << "x:     " << x << endl;
    cout << "*p:    " << *p << endl;



    //  �ı� p ָ��ָ��ĵ�ַ��ָ�� y��int��
    cout << "�ı� p ָ��ָ��ĵ�ַ��ָ�� y��int��" << endl;
    int y = 10;
    p = &y;
    cout << "y:     " << y << endl;
    cout << "*p:    " << *p << endl;
    cout << "&y:    " << &y << endl;
    cout << "p:     " << p << endl;
    cout << "&p:    " << &p << endl;



    //  ָ��ָ�� p ��ָ�� pp
    cout << "ָ��ָ�� p ��ָ�� pp" << endl;
    int **pp = &p;
    p = &y;
    *pp = &x;
    **pp = 11;
    cout << "x:     " << x << endl;
    cout << "y:     " << y << endl;
    cout << "*p:    " << *p << endl;



    //  �ı� p ָ��ָ���ַ��ָ�� int �� p ָ��ָ�� z��const int��///
//    const int z = 100;
//    p = &z;
}

//  const int *p -> int/const int
void B() {
    //  ָ�� const int ��ָ�� p ָ�� x��int��
//    cout << "ָ�� const int ��ָ�� p ָ�� x��int��" << endl;
//    int x = 0;
//    const int *p = &x;
//    cout << "x:     " << x << endl;
//    cout << "*p:    " << *p << endl;



    //  �޸� x ��ֵ
//    cout << "x��int�� = 1" << endl;
//    x = 1;
//    cout << "x:     " << x << endl;
//    cout << "*p:    " << *p << endl;



    //  �޸� p ָ��ָ���ַ��ֵ ///
//    *p = 2;



    // ָ�� const int ��ָ�� p �ı䷽��ָ�� y��int��
//    cout << "ָ��const int��ָ�� p �ı䷽��ָ�� y��int��" << endl;
//    int y = 10;
//    p = &y;
//    cout << "y:     " << y << endl;
//    cout << "*p:    " << *p << endl;



    //  �޸� y ��ֵ
//    cout << "y = 11" << endl;
//    y = 11;
//    cout << "x:     " << y << endl;
//    cout << "*p:    " << *p << endl;



    //  �޸� p ָ��ָ���ַ��ֵ ///
//    *p = 12;



    // ָ�� const int ��ָ�� p �ı䷽��ָ�� z��const int��
//    cout << "ָ�� const int ��ָ�� p �ı䷽��ָ�� z��const int��" << endl;
//    const int z = 100;
//    p = &z;
//    cout << "z:     " << z << endl;
//    cout << "*p:    " << *p << endl;



    //  �޸� p ָ��ָ���ַ��ֵ ///
//    *p = 101;



    //  �޸� z ��ֵ ///
//    z = 102;
}

//  int *const p -> int/const int
void C() {
    //  ָ�� int �� const ָ�� p ָ�� x��int��
    cout << "ָ�� int �� const ָ�� p ָ�� x��int��" << endl;
    int x = 0;
    int *const p = &x;
    cout << "x:     " << x << endl;
    cout << "*p:    " << *p << endl;



    //  �޸� x ��ֵ
    cout << "x = 1" << endl;
    x = 1;
    cout << "x:     " << x << endl;
    cout << "*p:    " << *p << endl;



    //  �޸� p ָ��ָ���ַ��ֵ
    cout << "*p = 2" << endl;
    *p = 2;
    cout << "x:     " << x << endl;
    cout << "*p:    " << *p << endl;



    //  ָ�� int �� const ָ�� p �ı䷽��ָ�� y��int�� ///
//    int y = 10;
//    p = &y;



    //  ָ�� const int ��ָ�� p �ı䷽��ָ�� z��const int �� //???
//    const int z = 100;
//    p = &z;
}

//  const int *const p -> int/const int
void D() {
//  ָ�� const int �� const ָ�� p ָ�� x��int��
    int x = 0;
    const int *const p = &x;
    cout << "ָ�� const int �� const ָ�� p ָ�� x��int��" << endl;
    cout << "x:     " << x << endl;
    cout << "*p:    " << *p << endl;
    //  �޸� x ��ֵ
    cout << "x = 1" << endl;
    x = 1;
    cout << "x:     " << x << endl;
    cout << "*p:    " << *p << endl;
    //  �޸� p ָ��ָ���ַ��ֵ //???
//    *p = 2;

    // ָ�� const int �� const ָ�� p ָ�� y��int�� //???
//    int y = 10;
//    p = &y;

    // ָ�� const int ��ָ�� p �ı䷽��ָ�� z��const int �� //???
//    const int z = 100;
//    p = &z;
}

int main() {

    A();
//    B();
//    C();
//    D();

    return 0;
}