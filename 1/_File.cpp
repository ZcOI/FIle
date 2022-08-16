//Chinese Version 1.0
//With CMD in Chinese System.
//File.cpp By Zchared.
#include<iostream>
#include<cstring>
#include<algorithm>
#include<string>
#include<windows.h>

using namespace std;

string filename[1000];//it begins with numbers
string tarname[1000];//it begins with english characters
int n;
string dir;
string path0; 

void Getcmd(){
	freopen("_1.cpp","w",stdout);
	cout<<system("dir");
	system("exit");
	fclose(stdout);
}

bool cmp(string a,string b){
	if(a.length()<b.length())return true;
	else if(a.length()>b.length())return false;
	else{
		int i=0;
		while(a[i]==b[i])i++;
		if(a[i]>b[i])return false;
		else return true;
	}
}

//string rename(string a){
//	int i=0;
//	while(a[i]!='.')i++;
//	a.insert(i,"(1)");
//	return a;
//}

void readfilename(){
	freopen("_1.cpp","r",stdin);
	string cac;
	string nam; 
	for(int i=0;i<6;i++)cin>>cac;
	cin>>path0;
	for(int i=0;i<9;i++)cin>>cac;
	for(int i=0;i<n*2;i++){
		for(int j=0;j<3;j++)cin>>cac;
		cin>>nam;
		if(nam!="..")filename[i]=nam;
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<3;j++)cin>>cac;
		cin>>tarname[i];
	}
	fclose(stdin);
}

void f(){
	for(int i=0;i<n;i++){
		string c="copy ";
		string path1=path0+tarname[i];
		string path2=path0+"\\"+dir+"\\"+filename[i];
		string path3=path0+"\\"+dir+"\\"+filename[i+n];
		c="copy "+path1+" "+path2;
		cout<<c<<endl;
		system(c.c_str());
		c="copy "+path1+" "+path3;
		cout<<c<<endl;
		system(c.c_str());
	}
}

int main(){
	Getcmd();
	cout<<"Press the number of your files:\n";
	cin>>n;
	cout<<endl<<"Press the target DIR of your output:\n";
	cin>>dir;
	string cm="mkdir "+dir;
	cout<<cm<<endl;
	system(cm.c_str());
	cout<<endl<<"Make dir successfully\n";
	readfilename();
	sort(filename,filename+2*n,cmp);
	path0+="\\";
	for(int i=0;i<n*2;i++){
		cout<<filename[i]<<endl;
	}
	cout<<endl<<path0;
	f();
	return 0;
} 
