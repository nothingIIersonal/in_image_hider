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


namespace hider_png
{


	void encode(const std::string &filename, const std::vector<uint8_t> &data, const uint8_t &data_type);
	std::vector<uint8_t> decode(const std::string &filename);


} // end hider_png