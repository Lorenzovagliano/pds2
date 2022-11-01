#ifndef PILHA_H
#define PILHA_H

#include <iostream>

template<typename T>
class Pilha{
    private:
        T* _arr;
        int _max_tam;
        int _top;


    public:

        Pilha(int max_tam){
            this->_max_tam = max_tam;
            this->_arr = new T[max_tam];
            this->_top = 0;
        }

        ~Pilha(){}

        bool push(const T& novo_e){
            if(this->_top == this->_max_tam){
                return false;
            }
            else{
                this->_arr[this->_top + 1] = novo_e;
                this->_top++;
                return true;
            }
        }

        bool pop(T& valor){
            if(this->_top == 0){
                return false;
            }
            else{
                valor = this->_arr[this->_top];
                this->_top--;
                return true;
            }

        }

        bool get_maior(T& valor){
            if(this->_top == 0){
                valor = this->_arr[this->_top];
                return false;
            }
            else{
                if(this->_top == 1){
                    valor = this->_arr[this->_top];
                    return true;
                }
                
                int i = 1;
                while(i < this->_top){
                    if(this->_arr[i] > this->_arr[i + 1]){
                        valor = this->_arr[i];
                    }
                    else{
                        valor = this->_arr[i + 1];
                    }
                    i++;
                }
                return true;
            }
        }

        bool vazia(){
            if(this->_top == 0){
                return false;
            }
            else{
                return true;
            }
        }

        void print(){
            for(int i = 1; i <= this->_top; i++){
                std:: cout << this->_arr[i] << std::endl;
            }
        }

};

#endif