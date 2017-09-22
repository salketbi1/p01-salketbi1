#include<cstdlib>
#include<ctime>
#include<iostream>

using namespace std;

int main()
{
  srand( time(0) );
  int playing;
  int exercising;
  exercising=rand() % 10 + 1;

  cout<<"Guess a random number between 1 and 10"<<endl;
  cin>>playing;

  if(playing==exercising)
  {
   cout<<"You, playing correctly! You win!"<<endl;
  }
  else if(playing>exercising)
   {
    int saif;
    saif = playing - exercising;
    cout<<"You were saif "<<saif<<". Sorry, you lose."<<endl;
  }
   else if(playing<exercising)
   {
    int saif;
    saif = exercising - playing;
    cout<<"you were saif "<<saif<<". Sorry, you lose,"<<endl;
   }

   return 0;
}   
   
