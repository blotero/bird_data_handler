#include "config.hpp"
#include <iostream>

Configuration::Configuration() {
  std::cout << "Instantiated configuration...\n";
};

void Configuration::setOptionMap(OptionMap *opMapPtr) {
  this->opMapPtr = opMapPtr;
}

Application::Application() { std::cout << "Instantiated application...\n"; };

void Application::setConfig(Configuration *configPtr) {
  this->configPtr = configPtr;
}

void Application::start() { std::cout << "Starting application!!\n"; }