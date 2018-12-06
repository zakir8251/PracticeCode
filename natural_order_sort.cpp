#include <bits/stdc++.h>
using namespace std;

print_container(vector<string>& V)
{
	for(auto& v:V)
		cout<<v<<" ";
	cout<<endl;
}

int parse_digit(string& str)
{
	int start=str.find('_')+1;
	int end = str.find('.');
	return stoi(str.substr(start, end-start+1), nullptr);
}

int my_sort_fn(string& s1, string& s2)
{
	return parse_digit(s1) < parse_digit(s2);
}

/*
  Sort the list of filenames in natural order:-
  Input Sequence       :RGI_0.pdf RGI_1.pdf RGI_2.pdf RGI_10.pdf RGI_8.pdf RGI_50.pdf 
  Lexicographical order:RGI_0.pdf RGI_1.pdf RGI_10.pdf RGI_2.pdf RGI_50.pdf RGI_8.pdf
  Natural order        :RGI_0.pdf RGI_1.pdf RGI_2.pdf RGI_8.pdf RGI_10.pdf RGI_50.pdf
*/

int main()
{
	vector<string> V={"RGI_0.pdf", "RGI_1.pdf", "RGI_2.pdf", "RGI_10.pdf", "RGI_8.pdf", "RGI_50.pdf" };
	print_container(V); //RGI_0.pdf RGI_1.pdf RGI_2.pdf RGI_10.pdf RGI_8.pdf RGI_50.pdf 
        sort(V.begin(), V.end(), my_sort_fn);
	print_container(V); //RGI_0.pdf RGI_1.pdf RGI_2.pdf RGI_8.pdf RGI_10.pdf RGI_50.pdf 
        //Solution using labda []
	sort(V.begin(), V.end(), [] (string s1, string s2){return parse_digit(s1) < parse_digit(s2);});
	print_container(V); //RGI_0.pdf RGI_1.pdf RGI_2.pdf RGI_8.pdf RGI_10.pdf RGI_50.pdf 

 	return 0;
}
