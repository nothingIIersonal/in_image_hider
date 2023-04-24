#pragma once


#include <iostream>
#include <vector>
#include <cinttypes>
#include <png++/png.hpp>
#include <bitset>
#include <climits>
#include <algorithm>
#include <cmath>
#include <boost/dynamic_bitset.hpp>


template <typename T>
using bdb = boost::dynamic_bitset<T>;


#define IN_IMAGE_HIDER_DEBUG


namespace hider_png
{


	void encode(const std::string &filename, const std::vector<uint8_t> &data, uint8_t data_type, const std::string &output_filename);
	std::vector<uint8_t> decode(const std::string &filename);


} // end hider_png