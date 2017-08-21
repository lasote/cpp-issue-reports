#include <boost/program_options.hpp>

int main(int argc, char * argv[])
{
  bpo::options_description desc;
  bpo::variables_map vm;

  desc.add_options()("testarg", bpo::value<std::string>(),
    "Use this argument to test boost program options");
  
  bpo::store(bpo::parse_command_line(argc, argv, desc), vm);
  bpo::notify(vm);
  
  std::string testvalue;
  if (vm.count("testarg"))
  {
    testvalue = vm["testarg"].as<std::string>();
  }

  std::cout << "You passed in argument `testarg` with value: " << testvalue;
  return 0;
}