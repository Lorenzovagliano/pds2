#ifndef ITEM_H
#define ITEM_H

#include "pilha.hpp"

class Item{
    private:
        int _key;
        int _val;

    public:
        Item(){}

        Item(int key, int val){
            this->_key = key;
            this->_val = val;
        }

        friend bool operator >(const Item &i1, const Item &i2){
            if(i1._val > i2._val){
                return true;
            }
            else{
                return false;
            }
        }

        friend std::ostream & operator << (std::ostream &out, const Item &i){
            std::cout << '(' << i._key << ',' << i._val << ')';
        }



};






#endif