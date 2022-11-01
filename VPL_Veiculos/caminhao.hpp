#ifndef CAMINHAO_H
#define CAMINHAO_H

#include "veiculo.hpp"

class Caminhao : public Veiculo{
    protected:
        int _carga_max;

    public:
        Caminhao(std::string subtipo, int velo_max, int n_passageiros, int carga_max);
        Caminhao(int velo_max, int n_passageiros, int carga_max);
        virtual ~Caminhao();

        int estima_preco() override;
        void print_info() override;
};





#endif
