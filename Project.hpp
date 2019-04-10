#pragma once
#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include <vector>

using namespace std;

struct trueNode
{
	string title;
	trueNode* next;
};

struct fakeSpeech
{
	string word;
	string url;
	int frequency;
	fakeSpeech* next;
};

class trueNews
{
public:
	trueNews();
	~trueNews();
	bool isEmpty();
	void addArticle(string word);
	void printInventory();
private:
	trueNode* head;
};

class fakeNews
{
public:
	fakeNews();
	~fakeNews();
	void addWord(string word);
	void addEdge(string word1, string word2);
	void printInventory();
private:
	vector<fakeSpeech> words;
	void dfs(fakeNews* word);
	void bfs(fakeNews* word);
};