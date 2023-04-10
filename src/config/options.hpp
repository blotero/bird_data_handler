#ifndef OPTIONS_H_
#define OPTIONS_H_

#include <iostream>
class OptionsSet {
private:
  void validate() { std::cout << "Validating option\n"; };

public:
  char *name;
  void execute() {
    validate();
    std::cout << "Executing option\n";
  };
};

class OptionsHandlerFactory {
private:
  int argc;
  char *argv[];
  OptionsSet parseOptions() { return OptionsSet(); }

public:
  OptionsHandlerFactory(int argc, char *argv[]) {
    argc = argc;
    argv = argv;
  }
  void handle() {
    OptionsSet options = parseOptions();
    options.execute();
  };
};
#endif