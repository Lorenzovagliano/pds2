#include "aquario.hpp"


void t1(){
    Aquario a;
    a.add_peixe(5, 'M');
    a.add_peixe(5, 'M');
}

void t2(){
    Aquario a;
    a.add_polvo(5.3);
    a.add_polvo(5.9);
}

void t3(){
    Aquario a;
    a.add_peixe(987.5, 'F');
    a.add_peixe(1000, 'M');
    a.add_polvo(126);
    a.print();
}

void t4(){
    Aquario a;
    a.add_peixe(5, 'F');
    a.add_peixe(5, 'M');

    a.add_peixe(10, 'F');
    a.add_peixe(10, 'M');

    a.acasalamento(0, 2);
    a.acasalamento(2, 3);
    a.print();
}

void t5(){
    Aquario a;
    a.add_peixe(5, 'F');
    a.add_peixe(5, 'M');
    a.acasalamento(0, 2);
    a.acasalamento(0, 1);
    a.print();
    a.add_polvo(127);
    a.add_polvo(128);
    a.acasalamento(4, 5);
    a.acasalamento(0, 5);
    a.print();
}

void t6(){
    Aquario a;
    a.add_peixe(10, 'M');
    a.add_polvo(44.3);
    a.print();
    Aquario a2(a);
    a2.add_polvo(45.7);
    a2.acasalamento(1, 2);
    a2.print();
}

void t7(){
    Aquario a;
    a.add_polvo(1234.9);
    a.add_peixe(97, 'M');
    a.print();
    Aquario a2(a);
    a2.add_peixe(197, 'F');
    a2.add_polvo(19);
    a.acasalamento(0,3);
    a2.acasalamento(0,3);
    a.print();
    a2.acasalamento(0,4);
    a2.print();
}

void t8(){
    Aquario a;
    a.add_polvo(1234.9);
    a.add_peixe(97, 'M');
    a.print();
    Aquario a2(a);
    a2.add_peixe(197, 'F');
    a2.add_polvo(19);
    a.acasalamento(0,3);
    a2.acasalamento(0,3);
    a.print();
    a2.acasalamento(0,4);
    a2.print();
    Aquario a3(a2);
    a3.add_polvo(100);
    a3.acasalamento(3,5);
    a3.print();
}

int main(){
    int i;
    cin >> i;
    switch (i)
    {
    case 1:
        t1();
        break;
    case 2:
        t2();
        break;
    case 3:
        t3();
        break;
    case 4:
        t4();
        break;
    case 5:
        t5();
        break;
    case 6:
        t6();
        break;
    case 7:
        t7();
        break;
    case 8:
        t8();
        break;
    
    default:
        break;
    }
    return 0;
}