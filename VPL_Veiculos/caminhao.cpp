#include "caminhao.hpp"

Caminhao::Caminhao(std::string subtipo, int velo_max, int n_passageiros, int carga_max) : Veiculo(subtipo, velo_max, n_passageiros), _carga_max(carga_max) {}

Caminhao::Caminhao(int velo_max, int n_passageiros, int carga_max) : Veiculo("Caminhao", velo_max, n_passageiros), _carga_max(carga_max) {}

Caminhao::~Caminhao(){
    std::cout << "Destrutor Caminhao" << std::endl;
}


int Caminhao::estima_preco(){
    int preco = 50000 + 100*this->_carga_max + 10*this->_velo_max;
    return(preco);
}

void Caminhao::print_info(){
    Veiculo::print_info();
    std::cout << "\tCarga maxima: " << this->_carga_max << " kg" << std::endl;
}