//  This file is part of My First Evolutionary Algorithm
//  Copyright (C) Narges Shahhoseini, 2022.
//  Released under MIT license; see LICENSE

#include <iostream>

#include "emp/base/vector.hpp"

#include "evo-algo/config_setup.hpp"
#include "evo-algo/example.hpp"
#include "evo-algo/ExampleConfig.hpp"

// This is the main function for the NATIVE version of My First Evolutionary Algorithm.

evo_algo::Config cfg;

int main(int argc, char* argv[])
{ 
  // Set up a configuration panel for native application
  setup_config_native(cfg, argc, argv);
  cfg.Write(std::cout);

  std::cout << "Hello, world!" << "\n";

  return example();
}
