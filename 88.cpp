#include "head.h"
#include <stdlib.h>
#include <time.h>

int getUid(const string &line,string &uid,string &chg)
{
	bool isUid = true;
	for(size_t i = 0;i < line.size();++i){
		if(line[i] != ' ' && isUid)	{
			uid += line[i];
		}else{
			isUid = false;
			chg += line[i];
		}
	}
	return 0;
}
void GetUid()
{
	ifstream fin4("uids.txt");
	if (!fin4.good()) {
		cout << "open uids.txt error" << endl;
		//return 1;
	}
	while (!fin4.eof() && fin4.good()) 
	{
		unsigned uid = 0;
		unsigned count = 0;
		fin4 >> uid;
		if (!uid)
			break;
	}
}
int main()
{
	//GetUid();
	//cout << "finish" << endl;
	string strs = "1";
	char str[] = {"15,15,15,15,15"};
	char a[10], b[10],c[10],d[10];
	int x,y,h,w;
	x = y = h = w = 0;
	char ch;
	sscanf(str, "%[^,],%[^,],%[^,],%[^,]", a,b,c,d);
	cout << "a=" << a << " b=" << b << " c=" << c << " d=" << d << endl;
	
	sscanf(strs.c_str(), "%d%*c%d%*c%d%*c%d",&x,&y,&h,&w);
	cout << "x=" << x << " y=" << y << " h=" << h << " w=" << w << endl;
	system("pause");
	return 0;
}