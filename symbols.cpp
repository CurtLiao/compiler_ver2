#include"symbols.h"
#include<stdlib.h>
#include<stdio.h>
#include<vector>


varentry varNormal(std::string name, int type, bool isconst){
	varentry v;
	v.name = name;
	v.type = type;
	v.isconst = isconst;
	v.isArr = false;
	v.isInit = true;
	v.arrSize = 1;
	return v;
}
varentry varNormal_n(std::string name, int type, bool isconst){
	varentry v;
	v.name = name;
	v.type = type;
	v.isconst = isconst;
	v.isArr = false;
	v.isInit = false;
	v.arrSize = 1;
	return v;
}
varentry varArr(std::string name, int type, bool isconst, int arrSize){
	varentry v;
	v.name = name;
	v.type = type;
	v.isconst = isconst;
	v.isArr = true;
	v.isInit = true;
	v.arrSize = arrSize;
	return v;
}

varentry varArr_n(std::string name, int type, bool isconst, int arrSize){
	varentry v;
	v.name = name;
	v.type = type;
	v.isconst = isconst;
	v.isArr = true;
	v.isInit = false;
	v.arrSize = arrSize;
	return v;
}
SymbolTables::SymbolTables(){

	SymbolTable symboltable;
	symboltable.scopeName = "global";
	Table.push_back(symboltable);
}
int SymbolTables::pushTable(std::string name){
	
	SymbolTable symboltable;
	symboltable.scopeName = name;
	Table.push_back(symboltable);
}
int SymbolTables::update_TableName(std::string name){
	Table.back().scopeName = name;
}

int SymbolTables::popStack(){
	dumpTable();
	Table.pop_back();
}
int SymbolTables::dumpTable(){
	std::cout<<"Scope: "<<Table.back().scopeName << '\n';
	for(int i = 0;i < Table.back().varentrys.size();i++){
		varentry v = Table.back().varentrys[i];
		for(int k = 0;k < v.arrSize;k++){
			if(k!=0){
				if(v.isconst==true)
					std::cout<<"Constant"<<'\t';
				else
					std::cout<<"Variable"<<'\t';    //dont understand
			}
			else{
				if(v.isconst==true)
					std::cout<<"Constant"<<'\t';
				else
					std::cout<<"Variable"<<'\t';
			}
			if(v.type==T_NO){
				std::cout<< "none"<<'\t';
				std::cout<<v.name<<'\t';
				std::cout<<"null"<<'\n';
			}
			else if(v.type==T_INT){
				std::cout<<"int"<<'\t';
				if(v.isArr){
					std::cout<<v.name<<'['<< k << ']'<<'\t';
					if(v.isInit)
						std::cout<< v.data.inArr[k]<<'\n';
					else
						std::cout<<"null"<<'\n';
				}
				else{
					std::cout<<v.name<<'\t';
					if(v.isInit)
						std::cout<<v.data.ival<<'\n';
					else
						std::cout<<"null"<<'\n';
				}
			}
			else if(v.type==T_FLOAT){
				std::cout<<"float"<<'\t';
				if(v.isArr){
					std::cout<<v.name<<'['<< k << ']'<<'\t';
					if(v.isInit)
						std::cout<< v.data.flArr[k]<<'\n';
					else
						std::cout<<"null"<<'\n';
				}
				else{
					std::cout<<v.name<<'\t';
					if(v.isInit)
						std::cout<<v.data.fval<<'\n';
					else
						std::cout<<"null"<<'\n';
				}
			}
			else if(v.type==T_BOOL){
				std::cout<<"bool"<<'\t';
				if(v.isArr){
					std::cout<<v.name<<'['<< k << ']'<<'\t';
					if(v.isInit)
						std::cout<< v.data.boArr[k]<<'\n';
					else 
						std::cout<<"null"<<'\n';
				}
				else{
					std::cout<<v.name<<'\t';
					if(v.isInit)
						std::cout<<v.data.fval<<'\n';
					else
						std::cout<<"null"<<'\n';
				}
			}
			else if(v.type==T_STR){
				std::cout<<"string"<<'\t';
				if(v.isArr){
					std::cout<<v.name<<'['<< k << ']'<<'\t';
					if(v.isInit)
						std::cout<< v.data.stArr[k]<<'\n';
					else
						std::cout<<"?"<<'\n';
				}
				else{
					std::cout<<v.name<<'\t';
					if(v.isInit)
						std::cout<<v.data.sval<<'\n';
					else
						std::cout<<"null"<<'\n';
				}
			}
		}
	}
	std::cout<<"------------------------------------------"<<'\n';
}

int SymbolTables::addvar(varentry var){
	if(lookupscope(var.name).type == T_WRONG){
		Table.back().varentrys.push_back(var);
	}
	else{
		return 0;
	}
	return 1;
}
int SymbolTables::revVar(varentry var){
	for(int i =Table.size();i>=0;i--){
		for(int k=0;k<Table.size();k++){
			varentry v = Table[k].varentrys[i];
			if(v.name==var.name){
				if(!v.isconst){
					Table[k].varentrys[i]=var;
				}
			}
		}
	}
}

varentry SymbolTables::lookup(std::string name){
	for(int i =Table.size()-1;i>=0;i--){
		for(int k=0;k<Table[i].varentrys.size();k++){
			varentry v = Table[i].varentrys[k];
			if(v.name==name){
				return v;
			}
		}
	}
	varentry notexist;
	notexist.type = T_WRONG;
	return notexist;
}

varentry SymbolTables::lookupscope(std::string name){
	for(int i=0;i<Table.back().varentrys.size();i++){
		varentry v = Table.back().varentrys[i];
		if(v.name==name)
			return v;
	}
	varentry notexist;
	notexist.type = T_WRONG;
	return notexist;
}