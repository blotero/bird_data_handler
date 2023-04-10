#include "config.hpp"
#include "option_map.hpp"
#include "options.hpp"
#include <cstddef>
#include <iostream>

Configuration::Configuration() {
  std::cout << "Instantiated configuration...\n";
  this->opMapPtr = OptionMap::getInstance();
};

OptionsSet *csvInsertOptionsSet = new OptionsSet();
OptionsSet *insertSingleOptionsSet = new OptionsSet();
OptionsSet *readSingleOptionsSet = new OptionsSet();
OptionsSet *readAllOptionsSet = new OptionsSet();
OptionsSet *deleteRecordOptionsSet = new OptionsSet();

void Configuration::loadDefault() {
  std::cout << "Loading default configuration\n";
  this->opMapPtr->set(OptionKey::CSV_INSERT, csvInsertOptionsSet);
  this->opMapPtr->set(OptionKey::INSERT_SINGLE, insertSingleOptionsSet);
  this->opMapPtr->set(OptionKey::READ_SINGLE, readSingleOptionsSet);
  this->opMapPtr->set(OptionKey::READ_ALL, readAllOptionsSet);
  this->opMapPtr->set(OptionKey::DELETE_RECORD, deleteRecordOptionsSet);
}

Application::Application() { std::cout << "Instantiated application...\n"; };
Application::Application(Configuration *configPtr) {
  this->configPtr = configPtr;
}

void Application::setConfig(Configuration *configPtr) {
  this->configPtr = configPtr;
}

void Application::start() { std::cout << "Starting application!!\n"; }
