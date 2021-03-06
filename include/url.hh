#ifndef INCLUDE_URL_HH_
#define INCLUDE_URL_HH_

#include <string>
#include <utility>

struct url {
  url() = default;
  url(std::string u, size_t depth)
      : _url_str(std::move(u)), _depth(depth){}

  std::string _url_str;
  size_t _depth{0};
};

#endif  // INCLUDE_URL_HH_
