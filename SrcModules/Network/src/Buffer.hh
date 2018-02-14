#ifndef CPP_ZIA_BUFFER_HH
#define CPP_ZIA_BUFFER_HH

#include <list>
#include <vector>
#include <cstddef>

#include "api.h"

namespace nzm {
  class Buffer
  {
   private:

    std::list<std::byte>	_buffer;
   public:
    Buffer();

    void push(char data);
    char pop();

    bool hasHTTPRequest() const;
    zia::api::Net::Raw getHttpRequest();

    bool hasHTTPResponse() const;
    zia::api::Net::Raw getHttpResponse();

    void pushRaw(const zia::api::Net::Raw &resp);
  };
}

#endif //CPP_ZIA_BUFFER_HH
