#include <iostream>
#include <string>
using namespace std;

int main()
{
	string S;
	string happy = ":-)";
	string sad = ":-(";
	int hap = 0;
	int sa = 0;
	getline(cin, S);

	size_t pos_happy = S.find(happy);
	size_t pos_sad = S.find(sad);
	
	while (pos_happy != string::npos)
	{
		hap++;
		pos_happy = S.find(happy, pos_happy + 1);
	}

	while (pos_sad != string::npos)
	{
		sa++;
		pos_sad = S.find(sad, pos_sad + 1);
	}

	if (hap == 0 && sa == 0)
		cout << "none";
	else if (hap - sa == 0)
		cout << "unsure";
	else if (hap - sa > 0)
		cout << "happy";
	else
		cout << "sad";    
}