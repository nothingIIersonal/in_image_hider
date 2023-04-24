#include <iostream>
#include <vector>
#include <cinttypes>

#include "hider_png.h"


#define TYPE 0 // for future improvements (0 - just bytes, 1 - interpet as string and so on).
                // Now it doesn't matter.
#define OUT_FILENAME "output.png"


int main()
{
	std::cout << "\nEncoding...\n\n";
	hider_png::encode("input.png", {'a', 'b', 'c'}, TYPE, OUT_FILENAME); // example 1
	// hider_png::encode("input.png", {(0xA), (0xB), (0xC), (0xD), (0xE), (0xF), (1), (2), (3)}, TYPE, OUT_FILENAME); // example 2


	std::cout << "\n\nDecoding...\n";
	std::vector<uint8_t> decoded = hider_png::decode("output.png");

	if (TYPE)
	{
		std::cout << "STRING DATA: ";

		std::string res = "";
		for (const auto i : decoded)
		{
			res += (uint8_t)i;
		}

		std::cout << res << "\n";
	}

	std::cout << "DATA IN BYTES:\n";
	for (const auto i : decoded)
	{
		std::cout << std::hex << (uint32_t)i << "\n";
	}

	return 0;
}