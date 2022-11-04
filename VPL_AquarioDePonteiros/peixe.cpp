#include "peixe.hpp"
#include <memory>

Peixe::Peixe(double peso, char sexo) : Criatura("Peixe"), _peso(peso), _sexo(sexo){
    cout << "Peixe:" << this->_subtipo << endl;
}

Peixe::~Peixe(){
    cout << "~Peixe:" << this->_subtipo << endl;
}

double Peixe::get_peso(){
    return this->_peso;
}

char Peixe::get_sexo(){
    return this->_sexo;
}

void Peixe::print_info(){
    this->Criatura::print_info();
    cout << "\tPeso: " << this->_peso << " kg" << endl;
    cout << "\tSexo: " << this->_sexo << endl;
}

list<unique_ptr<Criatura>> Peixe::acasalar(shared_ptr<Criatura> c){
    shared_ptr<Peixe> peixe = dynamic_pointer_cast<Peixe>(c);
    
    if(this->get_sexo() == peixe->get_sexo()){
        list<unique_ptr<Criatura>> vazia = {};
        return vazia;
    }
    else{
        list<unique_ptr<Criatura>> filhotes;
        double pesoFilhotes = (peixe->get_peso() + this->get_peso())/2;

        filhotes.push_back(unique_ptr<Criatura>(new Peixe(pesoFilhotes, 'F')));
        filhotes.push_back(unique_ptr<Criatura>(new Peixe(pesoFilhotes, 'M')));

        return filhotes;
    }


}

