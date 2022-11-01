#include "caminhao_autonomo.hpp"
#include <list>

void print_list(std::list<Veiculo*> l){
    for(auto* i : l){
        i->print_info();
    }
}

void rm_id(std::list<Veiculo*> &l, int id){
    for(auto* i : l){
        if(i->get_id() == id){
            l.remove(i);
            delete i;
            break;
        }
    }
}

int main(){
    std::list<Veiculo*> veiculos;

    std::string comando, fabricante;
    int velo_max, n_passageiros, carga_max, id;

    while(std::cin >> comando){
        if(comando == "add_c"){
            std::cin >> velo_max >> n_passageiros >> carga_max;
            Caminhao* c = new Caminhao(velo_max, n_passageiros, carga_max);
            veiculos.push_back(c);
        }
        else if(comando == "add_ca"){
            std::cin >> velo_max >> n_passageiros >> carga_max >> fabricante;
            CaminhaoAutonomo* ca = new CaminhaoAutonomo(velo_max, n_passageiros, carga_max, fabricante);
            veiculos.push_back(ca);
        }
        else if(comando == "rm"){
            std::cin >> id;
            rm_id(veiculos, id);
        }
        else if(comando == "print"){
            print_list(veiculos);
        }
    }




    return(0);
}