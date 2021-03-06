#ifndef CPP_ZIA_CONSOLE_HH
#define CPP_ZIA_CONSOLE_HH

#include <iostream>
#include <iomanip>

#include "../zia.hh"
#include "Log.hpp"

namespace nz {
  class Console
  {
   public:
    zia &	_zia;

   public:
    Console(zia & zia);

    virtual ~Console();

    void	run();
    void	runCmd(std::string &);
    void displayHelp();
    void dispatchCommand(const std::vector<std::string>&);
    void invalidCommand();
    void displayModulesList();

    std::string join(std::vector<std::string> v, std::string j = "");
  };
}

#endif //CPP_ZIA_CONSOLE_HH
