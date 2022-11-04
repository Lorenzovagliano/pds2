#ifndef POLVO_H
#define POLVO_H

#include "criatura.hpp"

class Polvo: public Criatura{
    public:
        Polvo(double qi);
        virtual ~Polvo();

        double get_qi();

        virtual void print_info() override;

        virtual list<unique_ptr<Criatura>> acasalar(shared_ptr<Criatura> c) override;

    protected:
        double _qi;

};

#endif