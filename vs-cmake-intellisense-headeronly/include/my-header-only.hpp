#include <string>
#include <json.hpp>

using json = nlohmann::json;

namespace sample
{
  auto j3 = json::parse("{ \"happy\": true, \"pi\": 3.141 }");
	//The intellisense of include directories, and any other include-related
  //code will fail to load becuase this header is not "linked" to 9included in)
  //any .cpp files which are compiled. 
  //
  //To see the intellisense here get fixed, go to "my-header-only-fix.cpp"
  //Uncomment the first line in that file, and intellisense here will be fixed. 
}