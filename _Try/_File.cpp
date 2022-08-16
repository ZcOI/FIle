#include<iostream>
#include<string>
#include<cstring>
#include<Windows.h>

using namespace std;
string s;
string filename[10000];
	string cac;
	string tarname[10909];
	string nam; 
	string path0;
int main(){
	s=system("dir");
	freopen("_1.cpp","w",stdout);
	cout<<s;
	fclose(stdout);
	cout<<"input the number:";
	int n;
	cin>>n;
	cout<<endl;
	string cac;
	//freopen("_1.cpp","r",stdin);
	freopen("_1.cpp","r",stdin);
	for(int i=0;i<13;i++)cin>>cac;
	cin>>path0;
	for(int i=0;i<10;i++)cin>>cac;
	for(int i=0;i<n*2;i++){
		for(int j=0;j<4;j++)cin>>cac;
		cin>>nam;
		if(nam!="..")filename[i]=nam;
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<4;j++)cin>>cac;
		cin>>tarname[i];
	}
	fclose(stdin);
	for(int i=0i<n;i)
	return 0;
}
