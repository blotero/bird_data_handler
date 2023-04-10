#ifndef OPTIONS_H_
#define OPTIONS_H_

#include <iostream>
class OptionsSet {
private:
  void validate();

public:
  char *name;
  void execute();
};

class OptionsHandlerFactory {
private:
  int argc;
  char *argv[];
  OptionsSet parseOptions();

public:
  OptionsHandlerFactory(int argc, char *argv[]);
  void handle();
};
#endif