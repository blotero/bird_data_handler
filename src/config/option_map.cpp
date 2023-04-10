#include "option_map.hpp"
#include "options.hpp"
#include <iostream>

OptionMap *OptionMap::pinstance_ = nullptr;

OptionMap *OptionMap::getInstance() {
  if (pinstance_ == nullptr) {
    pinstance_ = new OptionMap();
  }
  return pinstance_;
}

void OptionMap::set(OptionKey opk, OptionsSet *ops) {
  printf("Setting next option: %d\n", opk);
  this->data.insert(std::pair<OptionKey, OptionsSet *>(opk, ops));
}

OptionsSet *OptionMap::get(OptionKey opk) { return this->data.at(opk); };