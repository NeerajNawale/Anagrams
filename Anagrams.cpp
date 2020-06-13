#include<iostream>
using std::cin;
class Anagrams
{
		char* str1,*str2;
	public:
		Anagrams()
		{
			str1=new char[15];
			str2=new char[15];	
		}
		void getData()
		{
			printf("\nEnter First String --> ");
			cin.getline(str1,15);
			printf("\nEnter Second String --> ");
			cin.getline(str2,15);
		}
		void check()
		{
			int sum1=0,sum2=0;
			for(int i=0;str1[i];i++)
				sum1+=str1[i];
			for(int i=0;str2[i];i++)
				sum2+=str2[i];
			if(sum1==sum2)
				printf("\nEntered Strings are Anagrams of Each Other\n");
			else
				printf("\nEntered Strings are NOT Anagrams of Each Other\n");	
		}
		~Anagrams()
		{
			delete []str1;
			delete []str2;
		}
};
main()
{
	//system("clear");
	Anagrams ag;
	ag.getData();
	ag.check();
}


