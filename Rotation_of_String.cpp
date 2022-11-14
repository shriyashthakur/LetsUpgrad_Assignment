// How do you check if two strings are a rotation of each other.
#include <bits/stdc++.h>
using namespace std;
bool check_rotation(string s, string goal)
{
	if (s.size() != goal.size())
		return false;

	queue<char> q1;
	for (int i = 0; i < s.size(); i++) {
		q1.push(s[i]);
	}

	queue<char> q2;
	for (int i = 0; i < goal.size(); i++) {
		q2.push(goal[i]);
	}

	int k = goal.size();
	while (k--) {
		char ch = q2.front();
		q2.pop();
		q2.push(ch);
		if (q2 == q1)
			return true;
	}
	return false;
}
int main()
{
	string str1 = "ABCD", str2 = "CDAB";

	if (check_rotation(str1, str2))
		printf("Strings are rotations of each other");
	else
		printf("Strings are not rotations of each other");
	return 0;
}

