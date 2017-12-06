#pragma once
#include <vector>
#include <iostream>
#include <fstream>
#include <string>
#include <random>
#include <algorithm>
#include <cctype>
#include <conio.h>

std::vector<std::string> words;
enum diff { EASY, NORMAL, HARD, LUCKY };

class Logic
{
private:
	bool vec_contain_word(const std::vector<std::string>& vec, const std::string& word);
	std::vector<int> filler(const std::string& word);


};