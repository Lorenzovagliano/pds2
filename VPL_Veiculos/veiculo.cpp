#include "veiculo.hpp"

int Veiculo::_next_id = 1;

Veiculo::Veiculo(std::string subtipo, int velo_max, int n_passageiros){
    this->_id = _next_id;
    _next_id++;

    this->subtipo = subtipo;
    this->_velo_max = velo_max;
    this->_n_passageiros = n_passageiros;
}

Veiculo::~Veiculo(){
    std::cout << "Destrutor Veiculo" << std::endl;
}

int Veiculo::get_id(){
    return this->_id;
}

void Veiculo::print_info(){
    std::cout << "Info: Veiculo " << this->_id << std::endl;
    std::cout << "Preco estimado: RS " << this->estima_preco() << ",00" << std::endl;
    std::cout << '\t' << "Subtipo: " << this->subtipo << std::endl;
    std::cout << '\t' << "Velocidade maxima: " << this->_velo_max << " km/h" << std::endl;
    std::cout << '\t' << "Capacidade de passageiros: " << this->_n_passageiros << std::endl;
}