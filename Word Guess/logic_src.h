#pragma once
#include <vector>
#include <iostream>
#include <fstream>
#include <string>
#include <random>
#include <algorithm>
#include <cctype>
#include <conio.h>


class Logic
{
private:
	std::vector<std::string> words;
	int word_size_config = 0;
	int game_diff = 0;
	int main();
	enum difficulty { EASY, MEDIUM, HARD, LUCKY };

private:
	bool vec_contain_word(const std::vector<std::string>& vec, const std::string& word);
	std::vector<int> filler(const std::string& word);
	int score_match(const std::string& word1, const std::string& word2, int w_size);
	void Generate(int w_size, int game_diff);
	int amount_verifier();
	int difficulty();

public:
	void init();
};