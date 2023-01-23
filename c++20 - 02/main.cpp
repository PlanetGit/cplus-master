#include <iostream>
#include <limits>

using namespace std;

int main()
{

  signed int x{10};
  signed int y{20};

  cout << "value(x) : " << x << endl;
  cout << "value(y) : " << y << endl;
  cout << "sizeof(x) : " << sizeof(x) << endl;
  cout << "sizeof(y) : " << sizeof(y) << endl;

  // Type size
  cout << "sizeof(bool) : " << sizeof(bool) << endl; // 1 byte

  cout << "long size: " << sizeof(long) << endl;                   // 4 byte
  cout << "long int size: " << sizeof(long int) << endl;           // 4 byte
  cout << "long long size: " << sizeof(long long) << endl;         // 8 byte
  cout << "long long int size: " << sizeof(long long int) << endl; // 8 byte
  long long int longinta = 1234567890123456789;
  int normalint = 1234567890;
  cout << "long long int value: " << longinta << endl;
  cout << "int value: " << normalint << endl;

  cout << "short size: " << sizeof(short) << endl;         // 2 byte
  cout << "short int size: " << sizeof(short int) << endl; // 2 byte

  cout << "double size: " << sizeof(double) << endl;              // 8 byte
  cout << "sizeof float : " << sizeof(float) << endl;             // 4 byte
  cout << "sizeof double : " << sizeof(double) << endl;           // 8 byte
  cout << "sizeof long double : " << sizeof(long double) << endl; // 16 byte

  float number1{1.12345678901234567890f}; // Precision : 7
  double number2{1.12345678901234567890}; // Precision : 15
  long double number3{1.12345678901234567890L};

  cout << "float number: " << number1 << endl;
  cout << "double number: " << number2 << endl;
  cout << "long double number: " << number3 << endl;

  auto var1{12};
  auto var2{13.0};
  auto var3{14.0f};
  auto var4{15.0l};
  auto var5{'e'};

  // int modifier suffixes
  auto var6{123u};  // unsigned
  auto var7{123ul}; // unsigned long
  auto var8{123ll}; // long long

  // text
  auto var9{"hello"};

  cout << "var1 occupies : " << sizeof(var1) << " bytes" << endl;
  cout << "var2 occupies : " << sizeof(var2) << " bytes" << endl;
  cout << "var3 occupies : " << sizeof(var3) << " bytes" << endl;
  cout << "var4 occupies : " << sizeof(var4) << " bytes" << endl;
  cout << "var5 occupies : " << sizeof(var5) << " bytes" << endl;
  cout << "var6 occupies : " << sizeof(var6) << " bytes" << endl;
  cout << "var7 occupies : " << sizeof(var7) << " bytes" << endl;
  cout << "var8 occupies : " << sizeof(var8) << " bytes" << endl;
  cout << "var9 string value: " << var9 << endl;
  cout << "var9 string size: " << sizeof(var9) << " bytes" << endl; // 8 bytes


  // ---------------------
  cout << "Range short min to max: " << numeric_limits<short>::min() << " - " << numeric_limits<short>::max() << endl;
  cout << "Range int min to max: " << numeric_limits<int>::min() << " - " << numeric_limits<int>::max() << endl;
  cout << "Range int unsigned min to max: " << numeric_limits<unsigned int>::min() << " - " << numeric_limits<unsigned int>::max() << endl;
  cout << "Range float min to max: " << numeric_limits<float>::lowest() << " - " << numeric_limits<float>::max() << endl;
  cout << "Range double min to max: " << numeric_limits<double>::lowest() << " - " << numeric_limits<double>::max() << endl;

  cout << "Range long min to max: " << numeric_limits<long>::min() << " - " << numeric_limits<long>::max() << endl;
  cout << "Range long int min to max: " << numeric_limits<long int>::min() << " - " << numeric_limits<long int>::max() << endl;
  cout << "Range long long int min to max: " << numeric_limits<long long int>::min() << " - " << numeric_limits<long long int>::max() << endl;

  const int aa {10};
  int const bb {15};
  cout << "const int: " << aa << endl;
  cout << "int const: " << bb << endl;

  constexpr int SOME_LIB_MAJOR_VERSION {1237};
  cout << "SOME_LIB_MAJOR_VERSION: " << SOME_LIB_MAJOR_VERSION << endl;

  return 0;
}