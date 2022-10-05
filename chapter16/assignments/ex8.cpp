#include <iostream>
#include <vector>
#include <set>
#include <string>
#include <iterator>
#include <algorithm>

using namespace std;

void ShowNames(string & name);

int main(void)
{
	string strmat;
	string strpat;
	vector<string> vecmat;
	vector<string> vecpat;

	cout << "Hi Mat, enter your friend's name (q to quit): ";
	getline(cin, strmat);
	while(strmat != "q")
	{
		vecmat.push_back(strmat);
		cout << "Enter the next friend's name (q to quit): ";
		getline(cin, strmat);
	}

        cout << "Hi Pat, enter your friends' names (q to quit): ";
        getline(cin, strpat);
        while(strpat != "q")
        {
                vecpat.push_back(strpat);
		cout << "Enter the next friend's name (q to quit): ";
                getline(cin, strpat);
        }

	sort(vecmat.begin(), vecmat.end());
	cout << "Here are Mat's friends:\n";
	for_each(vecmat.begin(), vecmat.end(), ShowNames);
	cout << endl;

        sort(vecpat.begin(), vecpat.end());
        cout << "Here are Pat's friends:\n";
        for_each(vecpat.begin(), vecpat.end(), ShowNames);
        cout << endl;

	// int n1 = vecmat.size(), n2 = vecpat.size();
	set<string> stot;
	copy(vecmat.begin(), vecmat.end(), insert_iterator<set<string>>
					  (stot, stot.begin()));
	copy(vecpat.begin(), vecpat.end(), insert_iterator<set<string>>
                                          (stot, stot.end()));
	cout << "Here are all the friends:\n";
	ostream_iterator<string, char> out_iter(cout, ", ");
	copy(stot.begin(), stot.end(), out_iter);
	cout << endl;

	return 0;
}

void ShowNames(string & name)
{
	cout << name << ", ";
}
