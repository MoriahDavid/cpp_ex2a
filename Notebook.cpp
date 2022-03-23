#include "Notebook.hpp"
#include "Direction.hpp"
#include <string>

using namespace std;

namespace ariel {
	
    Notebook::Notebook(){

    }
    void Notebook::write(int page, int row, int column, Direction d, string s){
        return;
    }
    string Notebook::read(int page, int row, int column, Direction d, int n){
        return "";
    }
    void Notebook::erase(int page, int row, int column, Direction d, int n){
        return;
    }
    void Notebook::show(int page_num){
        return;
    }
};
