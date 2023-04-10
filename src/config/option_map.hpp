#ifndef OPTION_MAP_H_
#define OPTION_MAP_H_

#include "options.hpp"
#include <iostream>

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

protected:
  OptionMap() {}

public:
  char *info();
  void set(OptionKey opk, OptionsSet ops);
  OptionsSet get(OptionKey opk);
  static OptionMap *getInstance();
};
#endif