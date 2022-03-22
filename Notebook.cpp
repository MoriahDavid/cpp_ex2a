#include "Notebook.hpp"
#include "Direction.hpp"
#include <string>

using namespace std;

namespace ariel {
	
    Notebook::Notebook(){

    }
    void Notebook::write(unsigned int page, unsigned int row, unsigned int column, Direction d, string s){
        return;
    }
    string Notebook::read(unsigned int page, unsigned int row, unsigned int column, Direction d, unsigned int n){
        return "";
    }
    void Notebook::erase(unsigned int page, unsigned int row, unsigned int column, Direction d, unsigned int n){
        return;
    }
    void Notebook::show(unsigned int page_num){
        return;
    }
};
