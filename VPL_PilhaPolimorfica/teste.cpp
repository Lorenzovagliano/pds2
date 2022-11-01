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
                std::cout << "Push false" << std::endl;
                return false;
            }
            else{
                this->_arr[this->_top + 1] = novo_e;
                this->_top++;
                std::cout << "Push true" << std::endl;
                return true;
            }
        }

        bool pop(T& valor){
            if(this->_top == 0){
                std::cout << "Pop false" << std::endl;
                return false;
            }
            else{
                valor = this->_arr[this->_top - 1];
                this->_top--;
                std::cout << "Pop true" << std::endl;
                return true;
            }

        }

        bool get_maior(T& valor){
            if(this->_top == 0){
                std::cout << "Maior false" << std::endl;
                return false;
            }
            else{
                int i = 1;
                std::cout << "Top: " << this->_top << std::endl;
                while(i <= this->_top){
                    if(this->_arr[i] > this->_arr[i + 1]){
                        valor = this->_arr[i];
                    }
                    i++;
                }
                std::cout << "Maior true" << std::endl;
                return true;
            }
        }

        bool vazia(){
            if(this->_top == 0){
                std::cout << "Vazia true" << std::endl;
                return true;
            }
            else{
                std::cout << "Vazia false" << std::endl;
                return false;
            }
        }

        void print(){
            for(int i = 1; i <= this->_top; i++){
                std:: cout << this->_arr[i] << std::endl;
            }
        }


};

int main(){
    Pilha<float> pilha(4);

    pilha.push(-5.0);
    pilha.push(0.5);
    pilha.push(4.0);
    pilha.push(-0.5);

    float valor;

    pilha.get_maior(valor);
    std::cout << valor << std::endl;

    pilha.pop(valor);
    pilha.pop(valor);


    pilha.print();
    std::cout << "\n Maior: \n";
    pilha.get_maior(valor);
    std::cout << valor << std::endl;


}