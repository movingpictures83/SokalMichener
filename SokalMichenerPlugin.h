#ifndef SOKALMICHENERPLUGIN_H
#define SOKALMICHENERPLUGIN_H

#include "Plugin.h"
#include "PluginProxy.h"
#include <string>
#include <vector>

class SokalMichenerPlugin : public Plugin
{
public: 
 std::string toString() {return "SokalMichener";}
 void input(std::string file);
 void run();
 void output(std::string file);

private: 
 std::string inputfile;
 std::string outputfile;

};

#endif
