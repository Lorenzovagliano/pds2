#ifndef CRIATURA_H
#define CRIATURA_H

#include <string>
#include <iostream>
#include <list>
#include <memory>

using namespace std;

class Criatura{
    public:
        Criatura(string subtipo);
        virtual ~Criatura();

        string get_subtipo();
        virtual void print_info();

        virtual list<unique_ptr<Criatura>> acasalar(shared_ptr<Criatura> c) = 0;

    protected:
        string _subtipo;

};

#endif