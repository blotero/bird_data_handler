#include "option_map.hpp"

OptionMap* OptionMap::pinstance_ = 0;

OptionMap *OptionMap::getInstance()
{
    if (pinstance_ == 0)
    {
        pinstance_ = new OptionMap();
    }
    return pinstance_;
}