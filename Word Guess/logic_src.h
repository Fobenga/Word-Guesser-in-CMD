#pragma once
#include <vector>
#include <iostream>
#include <fstream>
#include <string>
#include <random>
#include <cctype>
#include <conio.h>
#include <algorithm>

#define NOMINMAX
#include <Windows.h>

class Logic
{
private:
	int word_size_config = 0;
	std::vector<std::string> words;
	int game_diff = 0;
	enum difficulty { EASY, NORMAL, HARD, LUCKY };
	std::string guess;

private:
	std::vector<int> filler(const std::string& word);
	void Generate(int w_size, int game_diff);
	bool vec_contain_word(const std::vector<std::string>& vec, const std::string& word);
	int score_match(const std::string& word1, const std::string& word2, int w_size);
	int amount_verifier();
	int difficulty();

public:
	void init();
	std::string get_guess() { return guess; }
};