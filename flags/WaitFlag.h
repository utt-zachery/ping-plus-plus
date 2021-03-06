#pragma once
#include <string>
#include "AbstractFlag.h"
#include "../exceptions/SyntaxException.h"

//Concrete flag class that allows users to execute a custom command if PING requests are systematically failing
class WaitFlag : public AbstractFlag {
    
public:
    WaitFlag();
    
    //Default behavior will be set to 255. If the user passes in a command string and the threshold is reached, the command will be executed
    void parseCommand(int argc, const char ** arg);
    int getWaitTime();
    
private:
    int customTTL;
    bool isNumber(const std::string& s);
};
