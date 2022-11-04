#include "criatura.hpp"

Criatura::Criatura(string subtipo) : _subtipo(subtipo){
    cout << "Criatura:" << this->_subtipo << endl;
}

Criatura::~Criatura(){
    cout << "~Criatura:" << _subtipo << endl;
}

string Criatura::get_subtipo(){
    return this->_subtipo;
}

void Criatura::print_info(){
    cout << "Info: " << this->_subtipo << endl;
}

