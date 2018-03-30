#include<iostream>
#include<windows.h>

using namespace std;

int main()
	{
		int ch, f, t=9999999;
		cout<<"Welcome to Frequency Emitter, You can use it to produce different repplent sounds for Dogs, Mosquito etc.";
		cout<<"\n\n\n(Please low the volume of the speaker if frequency is too high, Speaker or our ears can be damage if sound is too high)";
		cout<<"\n\nPlease choose one option from the list:\n1. Mosquito Reppler (16KHz)\n2. Random (every frequency)\n3. Mannual input\n\n";
		cin>>ch;
		if(ch==1)
		{
			f=16000;
			cout<<"\nPlaying sound of "<<f<<" frequency";
			Beep(f,t);
		}
		else
		if(ch==2)
		{
			cout<<"Enter time interval in sec: ";
			int temp;
			cin>>temp;
			t=temp*1000;
			for(f=20; f<20000; f++)
				{
					cout<<"\nPlaying Sound of "<<f<<" frequency";
					Beep(f,t);
				}
		}
		else
		if(ch==3)
		{
			cout<<"\nPlease enter the frequency here: ";
			cin>>f;
			Beep(f,t);
		}
		else
		{
			cout<<"\n\nSorry You have entered wrong choice!!!!!!!";
		}		
		
			return 0;
	}
