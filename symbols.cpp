#include"symbols.h"
#include<stdlib.h>
#include<stdio.h>
#include<vector>

using namespace std;

varentry varNormal(std::string name, int type, bool isconst){
	varentry v;
	v.name = name;
	v.type = type;
	v.isconst = isconst;
	v.isArr = false;
	v.isInit = true;
	v.isfunc = false;
	v.arrSize = 1;
	if(type == T_STR){
		v.data.sval = new char[1];
		v.data.sval[0] = '0';
	}
	return v;
}
varentry varNormal_n(std::string name, int type, bool isconst){
	varentry v;
	v.name = name;
	v.type = type;
	v.isconst = isconst;
	v.isArr = false;
	v.isInit = false;
	v.isfunc = false;
	v.arrSize = 1;
	if(type == T_STR){
		v.data.sval = new char[1];
		v.data.sval[0] = '0';
	}
	return v;
}
varentry varArr(std::string name, int type, bool isconst, int arrSize){
	varentry v;
	v.name = name;
	v.type = type;
	v.data.ival = 0;
	v.isconst = isconst;
	v.isArr = true;
	v.isInit = true;
	v.isfunc = false;
	v.arrSize = arrSize;
	if(type == T_STR){
		v.data.sval = new char[1];
		v.data.sval[0] = '0';
	}
	return v;
}

varentry func(std::string name,int type){
	varentry v;
	v.name = name;
	v.type = type;
	v.data.ival = 0;
	v.isArr = false;
	v.isInit = true;
	v.isconst = false;
	v.isfunc = true;
	v.arrSize = 1;
	if(type == T_STR){
		v.data.sval = new char[1];
		v.data.sval[0] = '0';
	}
	return v;
}

SymbolTables::SymbolTables(){

	SymbolTable symboltable;
	symboltable.scopeName = "global";
	Table.push_back(symboltable);
}
int SymbolTables::pushStack(std::string name){
	
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
	std::cout<<"-----------------------------------------"<< endl;
	std::cout<<"Scope: "<<Table.back().scopeName << '\n'<<"SymbolTable:"<<endl;
	cout<<"conORvarORfun"<<'\t'<<"type"<<'\t'<<"name"<<'\t'<<"value:"<<endl;
	for(int i = 0;i < Table.back().varentrys.size();i++){
		varentry v = Table.back().varentrys[i];
		for(int k = 0;k < v.arrSize;k++){
			if(k!=0){
				std::cout<<"ARRAY:"<< k <<'\t'<<'\t';
			}
			else{
				if(v.isfunc==true)
					std::cout<<"function"<<'\t';
				else{
					if(v.isconst==true)
						std::cout<<"constant"<<'\t';
					else
						std::cout<<"variable"<<'\t';
				}
			}
			if(v.type==T_NO){
				std::cout<< "Notype"<<'\t';
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
					if(v.isInit);
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
	return 0;
}

int SymbolTables::funcIn(int type){
	Table[Table.size()-2].varentrys.back().type = type;
	if(type == T_STR){
		Table[Table.size()-2].varentrys.back().data.sval = new char[1];
		Table[Table.size()-2].varentrys.back().data.sval[0]='0';
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