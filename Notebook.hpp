#include "Direction.hpp"
#include <string>

using namespace std;

namespace ariel {
	class Notebook{
        public:
            Notebook();
            void write(int page, int row, int column, Direction d, string s);
            string read(int page, int row, int column, Direction d, int n);
            void erase(int page, int row, int column, Direction d, int n);
            void show(int page_num);
    };
};

