#include "caminhao_autonomo.hpp"

CaminhaoAutonomo::CaminhaoAutonomo(int velo_max, int n_passageiros, int carga_max, std::string fabricante) : Caminhao::Caminhao("CaminhaoAutonomo", velo_max, n_passageiros, carga_max), _fabricante(fabricante){}

CaminhaoAutonomo::~CaminhaoAutonomo(){
    std::cout << "Destrutor CaminhaoAutonomo" << std::endl;
}

int CaminhaoAutonomo::estima_preco(){
    int preco;
    if(this->_fabricante == "Tesla"){
        preco = 500000 + 100*this->_carga_max + 10*_velo_max;
    }
    if(this->_fabricante == "Waymo"){
        preco = 400000 + 100*this->_carga_max + 10*_velo_max;
    }
    return(preco);
}

void CaminhaoAutonomo::print_info(){
    Caminhao::print_info();
    std::cout << "\tFabricante: " << this->_fabricante << std::endl;

}