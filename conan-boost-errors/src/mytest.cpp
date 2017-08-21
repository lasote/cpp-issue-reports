#include <cstdio>
#include <iostream>
#include <string>
#include <boost/program_options.hpp>

int main(int argc, char * argv[])
{
  namespace bpo = boost::program_options;
  bpo::options_description desc;
  bpo::variables_map vm;

  desc.add_options()("testarg", bpo::value<std::string>(),
    "Use this argument to test boost program options");
  
  bpo::store(bpo::parse_command_line(argc, argv, desc), vm);
  bpo::notify(vm);
  
  std::cout << "This runs without conan imports with Boost/1.62.0";
  std::string input;
  getline(std::cin, input);
  return 0;
}