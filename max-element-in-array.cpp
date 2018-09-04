//std::max_element() is present in #include<algorithm> header file
//it returns address so '*' operator is used
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a[]={0,1,2,3,4,5,6};
	cout<<*std::max_element(a,a+7)<<endl;
	cout<<*std::min_element(a,a+7)<<endl;
	return 0;
}
