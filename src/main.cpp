#include "config/config.hpp"
#include "config/option_map.hpp"
#include <iostream>
#include <stdio.h>

int main(int argc, char *argv[], char *envp[]) {
  Configuration config = Configuration();
  config.loadDefault();
  Application app = Application(&config);
  app.start();
}
