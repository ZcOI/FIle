//getcmd.cpp   get the file name from the cmd command
#include<iostream>
#include<cstring>

using namespace std;
int main(){
	freopen("_1.cpp","w",stdout);
	cout<<system("dir");
	fclose(stdout);
	//return ;
	return 0;
}
