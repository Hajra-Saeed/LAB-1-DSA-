#include<iostream>
using namespace std;
template <typename T ,int N >
int linearsearch(T(&arr)[N], T value)
{
	for (int i = 0; i < N; i++)
	{
		if (arr[i] == value)
			return(int)i;
	}
	return -1;
}
template<typename T>
void printsearchresult(int index, T key)
{
	if (index == -1)
		cout << key << " not found in the array " << endl;
	else
		cout << key << " found at index " << endl;

}
int main()
{

	int intarray[5] = { 65,25,12,22,11 };
	int intkey = 12;
	int intindex = linearsearch(intarray, intkey);
	printsearchresult(intindex, intkey);

	float floatArray[4] = { 3.14, 2.71, 1.62, 0.57 };
	float floatKey = 1.62;
	int floatIndex = linearsearch(floatArray, floatKey);
	printsearchresult(floatIndex, floatKey);
	
	string stringArray[4] = { "apple", "orange", "banana", "grape" };
	string stringKey = "banana";
	int stringIndex = linearsearch(stringArray, stringKey);
	printsearchresult(stringIndex, stringKey);
	return 0;
}