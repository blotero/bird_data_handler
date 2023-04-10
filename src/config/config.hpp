#ifndef CONFIG_H_
#define CONFIG_H_

#include "option_map.hpp"

class Configuration {
private:
  OptionMap *opMapPtr;

public:
  Configuration();
  void setOptionMap(OptionMap *opMapPtr);
};

class Application {
private:
  Configuration *configPtr;

public:
  Application();
  void setConfig(Configuration *config);
  void start();
};

#endif