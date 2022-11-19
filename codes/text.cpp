#include<bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for(register int i=a;i<=b;i++)
class Y{
	private : int x;
	public :
		Y(){}
		Y(int x){
			this->x=x;
		}
};
class A{
	private :
		Y a[10];
	public :
		A(int x){
			a[1]=Y(x);
		}
		Y geta(void){
			return a[1];
		}
};
int main(void){
	vector<int> x;
	for(int i=1;i<=6;i++)x.push_back(i);
	x.erase(find(x.begin(),x.end(),4));
	for(int i=0;i<x.size();i++)printf("%d\n",x[i]);
	return 0;
}
//
