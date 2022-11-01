#ifndef CAMINHAO_AUTONOMO_H
#define CAMINHAO_AUTONOMO_H


#include "caminhao.hpp"

class CaminhaoAutonomo : public Caminhao{
    protected:
        std::string _fabricante;

    public:
        CaminhaoAutonomo(int velo_max, int n_passageiros, int carga_max, std::string fabricante);
        virtual ~CaminhaoAutonomo();

        int estima_preco() override;
        void print_info() override;

};


#endif