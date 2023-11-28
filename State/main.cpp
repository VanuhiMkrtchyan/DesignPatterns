#include "state.hpp"
#include "file.hpp"


int main(){
    File file;
    file.open();
    file.change();
    file.close();

    file.change();
    file.open();
    file.close();

}