#ifndef OPTION_MAP_H_
#define OPTION_MAP_H_

#include "options.hpp"
#include <iostream>
#include <map>

enum OptionKey {
  INSERT_SINGLE,
  CSV_INSERT,
  READ_ALL,
  READ_SINGLE,
  DELETE_RECORD,
};

class OptionMap {
private:
  static OptionMap *pinstance_;
  std::map<OptionKey, OptionsSet *> data;

protected:
  OptionMap() {
    // printf("Initialized option map instance in %p", this->pinstance_);
  }

public:
  char *info();
  void set(OptionKey opk, OptionsSet *ops);
  OptionsSet *get(OptionKey opk);
  static OptionMap *getInstance();
};
#endif