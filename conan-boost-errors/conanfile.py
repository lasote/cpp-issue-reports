#!/usr/bin/env python
from conans import ConanFile

class AgentServiceLibConan(ConanFile):
  name = "All_CPP_POC_Sandbox"
  version = "0.0.1"
  description = "A cross-platform agent service providing remote management of a host via IOT hub"
  author = "AppAnywhere"
  generators = "cmake"
  url = "https://github.com/AppAnywhere/agent-service-lib"
  requires = "Boost/1.64.0@bincrafters/testing"

  def configure(self):
    self.options["Boost"].shared = False

  def package(self):
    self.copy(src="include", dst="include")
