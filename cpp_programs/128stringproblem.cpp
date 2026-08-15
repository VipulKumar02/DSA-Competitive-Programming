//PROBLEM: LENGTH OF STRING
/*
#include<iostream>
#include<string>
using namespace std;

int main() {
    string s1;
    cout<<"Enter a string:";
    getline(cin,s1);

    cout<<"length of string is:"<<s1.length()<<endl;

}*/
# include<iostream>
#include<string>
using namespace std;
    
/*program for finding length of a string using string iterator
   

*/
int main()
{

	string s1="welcome";
	string::iterator it;
	int count=0;
	for(it=s1.begin();it!=s1.end();it++){
	    count++;
	}
	cout<<count;
}

/*
# include<iostream>
using namespace std;
    
//program for finding length of a string using for loop


int main()
{

	string str="welcome";
	int count=0;
	for(int i=0;str[i]!='\0';i++)
	{
		        count++;
	}
                cout<<"length is"<<count<<endl;
	return 0;
}
*/