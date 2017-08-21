#!/usr/bin/env python
from conans import ConanFile

class AgentServiceLibConan(ConanFile):
  name = "All_CPP_POC_Sandbox"
  version = "0.0.1"
  description = "A cross-platform agent service providing remote management of a host via IOT hub"
  author = "AppAnywhere"
  generators = "cmake"
  url = "https://github.com/AppAnywhere/agent-service-lib"
  requires = "Boost/1.62.0@lasote/stable", \
		"jsonformoderncpp/2.1.1@vthiery/stable", \
        "dir_monitor/1.0.0@bincrafters/testing", \
        
  def package(self):
    self.copy(src="include", dst="include")
