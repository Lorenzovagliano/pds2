#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    cout << "insira as letras: \n";
    string x;
    getline(cin, x);
    vector<char> letras(x.begin(), x.end());

    //Removes whitespaces from vector
    for(int i = 0; i<letras.size(); i++){
        if(letras[i] == ' '){
            letras.erase(letras.begin()+i);
        }
    }

    cout << "Insira a frase: \n";
    string y;
    getline(cin, y);
    vector<char> frase(y.begin(), y.end());

    //Counts how many times a letter is instanced in the phrase
    vector<int> vezes;
    vezes.resize(letras.size());
    for(int i = 0; i<letras.size(); i++){
        vezes[i] = count(frase.begin(), frase.end(), letras[i]);
    }

    int i = 0;
    while(i<letras.size()){
        int j = 0;
        while(j<frase.size()){
            if(frase[j] == letras[i]){
                frase[j] = '#';
            }
            j++;
        }
        i++;
    }

    for(char n: frase){
        cout << n;
    }
    cout << endl;

    for(int i = 0; i<letras.size(); i++){
        cout << letras[i];
        cout << ' ';
        cout << vezes[i] << endl;
    }

    return(0);
}