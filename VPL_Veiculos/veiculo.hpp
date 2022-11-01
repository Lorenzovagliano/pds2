#ifndef VEICULO_H
#define VEICULO_H

#include <iostream>
#include <string>

class Veiculo{
    private:
        int _id;
        std::string subtipo;
        static int _next_id;

    protected:
        int _velo_max;
        int _n_passageiros;

    public:
        Veiculo(std::string subtipo, int velo_max, int n_passageiros);
        virtual ~Veiculo();

        int get_id();

        virtual int estima_preco()=0;
        virtual void print_info();
};







#endif