# YA-HASHCOMBINE
yet another C/C++ hash combine implementation. Header-only `std::hash` combine algorithm

## Example Usage
```c++
#include <hashcombine> // include the library
std::string foo = "foo";
std::string bar = "bar";

// You can combine hashes incrementally like so
auto foo_hash = std::hash<std::string>{}(foo);
auto foobar_hash = ya::hash_combine(foo_hash, bar);

// You can also just combine many at once like so
auto combined = ya::hash_combine(foo, bar);
```
