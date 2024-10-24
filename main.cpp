#include <iostream>
#include <bitset>
#include <cstdint>
#using <System.dll>

using namespace System;

int main()
//{
//	uint8_t  a = 5;
//	std::bitset<8>b{ a };
//	std::cout << b << std::endl;
//	Console::ReadKey();
//
//	return 0;
//} 
//101

//{
//	uint8_t  a = 5;
//	std::bitset<8>b{ a };
//	std::cout << b << 1 << std::endl;
//	Console::ReadKey();
//
//	return 0;
//}
//1011

//{
//	uint8_t  a = 5;
//	std::bitset<8>b{ a };
//	std::cout << (b << 1) << std::endl;
//	Console::ReadKey();
//
//	return 0;
//}
//1010 shifting by one over to the left


//{
//	uint8_t  a = 5;
//	std::bitset<8>b{ a };
//
//	std::cout << b << " " << b.flip() << std::endl;
//	Console::ReadKey();
//
//	return 0;
//}
//flips all values if no input in flip(), or the position of the bit is flipped in input


//{
//	uint8_t  a = 5;
//	std::bitset<8>b{ a };
//
//	std::cout << b[0] << " " << b[7] << std::endl;
//	Console::ReadKey();
//
//	return 0;
//}

//{
//	uint8_t  a = 5;
//	std::bitset<16>b{ a };
//
//	std::cout << b << std::endl;
//	Console::ReadKey();
//
//	return 0;
//}
//


{
	uint8_t HiByte = 00000000;
	uint8_t LoByte = 00001111;
	uint16_t Data = 0000000000000000;
	uint16_t Data = Data | (HiByte << 8) | LoByte;

	std::bitset<16>data1{ Data };

	std::cout << data1 << std::endl;
	Console::ReadKey();



}