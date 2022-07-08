/* MIT License

Copyright (c) 2022 Asger Gitz-Johansen

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/
#include <iostream>
#include <hashcombine>

int main(int argc, char** argv) {
    std::string str1 = "foo";
    std::string str2 = "bar";

    // You can combine hashes incrementally like so
    auto foo_hash = std::hash<std::string>{}(str1);
    std::cout << R"("foo" hash: )" << foo_hash << std::endl;
    auto foobar_hash = ya::hash_combine(foo_hash, str2);
    std::cout << R"("foo" + "bar" hash: )" << foobar_hash << std::endl;

    // You can also just combine many at once like so
    auto combined = ya::hash_combine(str1, str2);
    std::cout << R"("foo" + "bar" hash: )" << combined << std::endl;

    return 0;
}
