#ifdef to_str_h
#error Already included.
#else
#define to_str_h

#include <string>

extern std::string to_str(fp128 const value);

#endif
