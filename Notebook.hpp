#include "Direction.hpp"
#include <string>

using namespace std;

namespace ariel {
	class Notebook{
        public:
            Notebook();
            void write(unsigned int page, unsigned int row, unsigned int column, Direction d, string s);
            string read(unsigned int page, unsigned int row, unsigned int column, Direction d, unsigned int n);
            void erase(unsigned int page, unsigned int row, unsigned int column, Direction d, unsigned int n);
            void show(unsigned int page_num);
    };
};

