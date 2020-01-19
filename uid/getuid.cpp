#include "../head.h"

int getUid(const string &line,string &uid)
{
	bool isRead = false;
	bool isuid = false;
	for(size_t i = 0;i < line.size();++i){
		if(!isRead && line[i] == 'l' && line[i+1] == 'o' && line[i+2] == 'g' && line[i+3] == 'i'){
			i = i + 5;
			isRead = true;
		}
		if(isRead && !isuid){
			if(line[i] == 'u' && line[i+1] == 'i' && line[i+2] == 'd' ){
				isuid = true;
				i = i + 4;
			}
		}
		if(isuid){
			if(line[i] >= '0' && line[i] <= '9')
				uid += line[i];
			else
				break;
		}
	}
	return 0;
}
void GetUid()
{
	ifstream in;
	ofstream out;
	set<int> uids;
	in.open("loginuid.txt",std::ios::in);
	if(in.good() != 1){
		cout << "open read file error" << endl;
		system("pause");
		return;
	}
	out.open("uids.txt",std::ios_base::trunc);
	if(out.good() != 1){
		cout << "open write file error" << endl;
		return;
	}
	string line;
	while(std::getline(in,line) && !in.eof() && in.good()){
		string uid;
		getUid(line,uid);
		//out << uid << "\n";
		if(!uid.size())
			continue;
		int u = atoi(uid.c_str());
		uids.insert(u);
	}
	set<int>::const_iterator it = uids.begin();
	while(it != uids.end()){
		out << *it << "\n";
		++it;
	}
	in.close();
	out.close();
}
int main()
{
	GetUid();
	cout << "finish" << endl;
	system("pause");
	return 0;
}