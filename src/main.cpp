#include <iostream>
#include <stdio.h>
#include "config/option_map.hpp"
#include "config/config.hpp"

int main(int argc, char *argv[], char *envp[]) {
    OptionMap* opMapPtr = OptionMap::getInstance();
    printf("Succesfully created opmap in address: %p\n", opMapPtr);
    Configuration config = Configuration();
    config.setOptionMap(opMapPtr);
    Application app = Application();
    app.setConfig(&config);
    app.start();
}
