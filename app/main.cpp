#include "uincampus/version.hpp"
#include <print>
int main() {
  std::println("uin-campus - Systeme de gestion academique");
  std::println("Version {}", uin::version());
}