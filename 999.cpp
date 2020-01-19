#include "head.h"
#include <sstream>
int main()
{
	struct leader{
		unsigned kill;
		unsigned uid;
		string name;
		leader(){}
		leader(unsigned k,unsigned u,string n){
			kill = k;
			uid = u;
			name = n;
			cout << "初始化" << endl;
		}
	};
	leader lt[6] = {{3350,45014713,"开心"},{76868,76511354,"壹生宠溺"},{4067,466504445,"心手相牵到永远"},
	{61928,355517614,"如无乱世何来英雄"},{30211,416005890,"振北押运"},{14155,536000004,"海浪"}};
	for(int i = 0; i < 6; ++i){
		/*pdataInfo->leader[i].kill = lt[i].kill;
		pdataInfo->leader[i].uid = lt[i].uid;
		pdataInfo->leader[i].ts = Time::GetGlobalTime();
		pdataInfo->leader[i].name = lt[i].name;
		*/
		//debug_log("kill:%u,uid=%u,name=%s",pdataInfo->leader[i].kill,pdataInfo->leader[i].uid,pdataInfo->leader[i].name.c_str());
		cout << lt[i].kill << "," << lt[i].uid << "," << lt[i].name << endl;
	}
	char a[20] = {"abc"};
	//char b[20] = a;
	cout << a << endl;
	system("pause");
	return 0;
}