#include "aquario.hpp"

void Aquario::add_peixe(double peso, char sexo){
    shared_ptr<Peixe> peixe(new Peixe(peso, sexo));
    this->_criaturas.push_back(peixe);
}

void Aquario::add_polvo(double qi){
    shared_ptr<Polvo> polvo(new Polvo(qi));
    this->_criaturas.push_back(polvo);
}

void Aquario::acasalamento(int id1, int id2){
    if(id1 >= this->_criaturas.size() || id2 >= this->_criaturas.size()){
        return;
    }

    list<unique_ptr<Criatura>> filhotes = this->_criaturas[id1]->acasalar(this->_criaturas[id2]);

    //for each mais fácil que iterator***

    //Este funciona apenas sem const???
    for(unique_ptr<Criatura> &i : filhotes){
        this->_criaturas.push_back(move(i));
    }
}

void Aquario::print() {
    cout << "=============" << endl << "Aquario Info: " << endl;
    for(shared_ptr<Criatura> const &i : _criaturas){
        i->print_info();
    }
    cout << "=============" << endl;
}

Aquario::Aquario(const Aquario &orig){
    for(shared_ptr<Criatura> const &i : orig._criaturas){
        if(i->get_subtipo() == "Peixe"){
            shared_ptr<Peixe> peixe = dynamic_pointer_cast<Peixe>(i);
            shared_ptr<Peixe> peixeCopia(new Peixe(*peixe));
            this->_criaturas.push_back(peixeCopia);
        }
        else if(i->get_subtipo() == "Polvo"){
            shared_ptr<Polvo> polvo = dynamic_pointer_cast<Polvo>(i);
            shared_ptr<Polvo> polvoCopia(new Polvo(*polvo));
            this->_criaturas.push_back(polvoCopia);
        }
        else{
            cout << "ERRO: Subtipo não definido" << endl;
        }
    }  
} 