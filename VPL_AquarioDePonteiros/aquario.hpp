#ifndef AQUARIO_H
#define AQUARIO_H

#include <iostream>
#include <vector>
#include <list>
#include <memory>

#include "criatura.hpp"
#include "peixe.hpp"
#include "polvo.hpp"

using namespace std;

class Aquario{

    public:
        Aquario(){}
        Aquario(const Aquario &orig);

        void add_peixe(double peso, char sexo);
        void add_polvo(double qi);
        void acasalamento(int id1, int id2);
        void print();

    private:
        vector<shared_ptr<Criatura>> _criaturas;

};

#endif