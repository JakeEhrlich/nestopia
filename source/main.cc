#include <iostream>
#include <fstream>

#include "core/api/NstApi.hpp"
#include "core/NstMachine.hpp"
#include "core/NstImage.hpp"

#include "nes_ntsc/nes_ntsc.inl"

int main(int argc, char *argv[]) {
  if (argc <= 1) return 1;
  std::ifstream rom(argv[1]);
  Nes::Core::Machine mach;
  mach.Load(rom, Nes::Core::FAVORED_NES_NTSC, false, nullptr, false, nullptr, Nes::Core::Image::CARTRIDGE);
  mach.Execute(nullptr, nullptr, nullptr);
}
