#ifndef CONFIG_H_
#define CONFIG_H_

#include "option_map.hpp"

class Configuration {
private:
  OptionMap *opMapPtr;

public:
  Configuration();
  void loadDefault();
};

class Application {
private:
  Configuration *configPtr;

public:
  Application();
  Application(Configuration* configPtr);
  void setConfig(Configuration *configPtr);
  void start();
};

#endif