#include <iostream>

int main() {
  std::cout << "Hello, compiler!\n\n";
  std::cout <<

#if defined(__clang__)
  "Clang " << __clang_version__ <<

#elif defined(__ICC) || defined(__INTEL_COMPILER)
  "Intel " << __INTEL_COMPILER <<

#elif defined(__GNUC__) || defined(__GNUG__)
  "GCC " << __VERSION__ << 

#elif defined(__HP_cc) || defined(__HP_aCC)
  "HP " << __HP_aCC <<

#elif defined(__IBMC__) || defined(__IBMCPP__)
  "IBM " << __IBMCPP__ <<  

#elif defined(_MSC_VER)
  "MSVC " << _MSC_FULL_VER <<

#elif defined(__PGI)
  "Portland PGCPP" << __VERSION__ <<

#elif defined(__SUNPRO_C) || defined(__SUNPRO_CC)
  "Solaris Studio" << __SUNPRO_CC <<

#endif

 '\n';
}

