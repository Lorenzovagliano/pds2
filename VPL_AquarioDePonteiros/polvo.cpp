#include "polvo.hpp"

Polvo::Polvo(double qi) : Criatura("Polvo"), _qi(qi) {
    cout << "Polvo:" << this->_subtipo << endl;
}

Polvo::~Polvo(){
    cout << "~Polvo:" << this->_subtipo << endl;
}

double Polvo::get_qi(){
    return this->_qi;
}

void Polvo::print_info(){
    this->Criatura::print_info();
    cout << "\tQI: " << this->_qi << endl;
}

list<unique_ptr<Criatura>> Polvo::acasalar(shared_ptr<Criatura> c){
    shared_ptr<Polvo> polvo = dynamic_pointer_cast<Polvo>(c);

    if(this->get_subtipo() == polvo->get_subtipo()){
        list<unique_ptr<Criatura>> vazia = {};
        return vazia;
    }
    else{
        list<unique_ptr<Criatura>> filhotes;
        double qiFilhote = (this->_qi + polvo->get_qi())/2;

        filhotes.push_back(unique_ptr<Criatura>(new Polvo(qiFilhote)));
        return filhotes;
    }
}
