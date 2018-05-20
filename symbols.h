#ifndef SYMBOLS_H
#define SYMBOLS_H
#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<string>
#include<vector>

enum TYPE{
	T_NO,T_BOOL,T_STR,T_INT,T_FLOAT,T_WRONG
};
typedef union{
	int ival;
	float fval;
	bool bval;
	char *sval;

	int* inArr;
	float* flArr;
	bool* boArr;
	char** stArr;
}varData;

typedef struct varentry{
	std::string name;
	int type;
	bool isInit;
	bool isconst;
	bool isArr;
	int arrSize;

	union{
		varData data;
	};
}varentry;

varentry varNormal(std::string name, int type, bool isconst);
varentry varNormal_n(std::string name, int type, bool isconst);
varentry varArr(std::string name, int type, bool isconst, int arrSize);
varentry varArr_n(std::string name, int type, bool isconst, int arrSize);

typedef struct{
	std::string scopeName;
	std::vector<varentry> varentrys;
} SymbolTable;

class SymbolTables
{
private:
	std::vector<SymbolTable> Table;
public:
	SymbolTables();

	int pushTable(std::string name);
	int update_TableName(std::string name);
	int popStack();
	int dumpTable();

	int addvar(varentry var);
	int revVar(varentry var);

	varentry lookup(std::string name);
	varentry lookupscope(std::string name);
	
};
#endif