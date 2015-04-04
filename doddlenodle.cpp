#include<iostream.h>
#include<time.h>
#include<stdlib.h>
#include<fstream.h>
#include<string.h>
#include<iomanip.h>
#include<math.h>

void questions();
void correctness();
void wrongness();
void saver();
void highscores();

char handle[20];
struct high
{
	char name[20];
	int score;
};
high highscore[5];
char high1[20];
char high2[20];
char high3[20];
char high4[20];
char high5[20];
int score1=0;
int score2=0;
int score3=0;
int score4=0;
int score5=0;
int score;
int response;
int x;
int main()
{
		srand(time(0));

cout<<"You are about to play a trivia game."<<endl;
cout<<"Please enter your handle"<<endl;
cin>>handle;
cout<<endl;
system("CLS");
cout<<"What do you want to do?"<<endl;
cout<<"1. Play Trivia!"<<endl;
cout<<"2. View Highscores"<<endl;
cin>>response;
if (response==1)
{
	system("CLS");
	questions();
}
else
{
	system("CLS");
	highscores();
}
	return 0;
}


void questions()
{
	int question;

	int repeat1=0;
	int repeat2=0;
	int repeat3=0;
	int repeat4=0;
	int repeat5=0;
	int repeat6=0;
	int repeat7=0;
	int repeat8=0;
	int repeat9=0;
	char answer;
start:
	question=rand()%8;
	
	if (repeat1==0)
	{
	if (question==0)
	{
		repeat1=1;
		cout<<"The coolest teacher ever is?"<<endl;
		cout<<"a. None of the Below"<<endl;
		cout<<"b. Mr. Babcock"<<endl;
		cout<<"c. Mr. Soscia"<<endl;
		cout<<"d. Mr. Blass"<<endl;
		cin>>answer;
		
		if (answer=='d' || answer=='D')
		{
			correctness();
		}
		else
		{
			wrongness();
		}
	}
	}
	if (repeat2==0)
	{
	if (question==1)
	{
		repeat2=1;
		cout<<"Which is not a type of loop?"<<endl;
		cout<<"a. While"<<endl;
		cout<<"b. For"<<endl;
		cout<<"c. Pickle"<<endl;
		cout<<"d. do While"<<endl;
		cin>>answer;
		
		if (answer=='c' || answer=='C')
		{
			correctness();
		}
		else
		{
			wrongness();
		}
	}
	}
	if (repeat3==0)
	{
	if (question==2)
	{
		repeat3=1;
		cout<<"Which of the following is not a movie?"<<endl;
		cout<<"a. Revenge of the Killer Georges "<<endl;
		cout<<"b. Seven"<<endl;
		cout<<"c. Snatch"<<endl;
		cout<<"d. Pi"<<endl;
		cin>>answer;
		
		if (answer=='a' || answer=='A')
		{
			correctness();
		}
		else
		{
			wrongness();
		}
	}
	}
	if (repeat4==0)
	{
	if (question==3)
	{
		repeat4=1;
		cout<<"What was the original capitol of the United States?"<<endl;
		cout<<"a. Boston"<<endl;
		cout<<"b. Seattle"<<endl;
		cout<<"c. Philadelphia"<<endl;
		cout<<"d. Mt. Vernon"<<endl;
		cin>>answer;
		
		if (answer=='c' || answer=='C')
		{
			correctness();
		}
		else
		{
			wrongness();
		}
	}
	}
	if (repeat5==0)
	{
	if (question==4)
	{
		repeat5=1;
		cout<<"Which of the following is not a Microsoft product?"<<endl;
		cout<<"a. Xbox"<<endl;
		cout<<"b. Zune"<<endl;
		cout<<"c. Windows Xp"<<endl;
		cout<<"d. iPod"<<endl;
		cin>>answer;
		
		if (answer=='d' || answer=='D')
		{
			correctness();
		}
		else
		{
			wrongness();
		}
	}
	}
	if (repeat6==0)
	{
	if (question==5)
	{
		repeat6=1;
		cout<<"Which is a fruit?"<<endl;
		cout<<"a. Chicken"<<endl;
		cout<<"b. Corn"<<endl;
		cout<<"c. Tomato"<<endl;
		cout<<"d. Pepper"<<endl;
		cin>>answer;
		
		if (answer=='c' || answer=='C')
		{
			correctness();
		}
		else
		{
			wrongness();
		}
	}
	}
	if (repeat7==0)
	{
	if (question==6)
	{
		repeat7=1;
		cout<<"Which is not a search engine?"<<endl;
		cout<<"a. yahoo"<<endl;
		cout<<"b. dogpile"<<endl;
		cout<<"c. google"<<endl;
		cout<<"d. Pandora"<<endl;
		cin>>answer;
		;
		if (answer=='d' || answer=='D')
		{
			correctness();
		}
		else
		{
			wrongness();
		}
	}
	}
	if (repeat8==0)
	{
	if (question==7)
	{
		repeat8=1;
		cout<<"How many stars are in Orion'a Belt?"<<endl;
		cout<<"a. Three"<<endl;
		cout<<"b. Two"<<endl;
		cout<<"c. Seven"<<endl;
		cout<<"d. None of the Above"<<endl;
		cin>>answer;
		
		if (answer=='a' || answer=='A')
		{
			correctness();
		}
		else
		{
			wrongness();
		}
	}
	}
	if (repeat9==0)
	{
	if (question==8)
	{
		repeat9=1;
		cout<<"Which company makes Mountain Dew?"<<endl;
		cout<<"a. Coca-Cola"<<endl;
		cout<<"b. RC"<<endl;
		cout<<"c. Pepsi"<<endl;
		cout<<"d. Stewart's"<<endl;
		cin>>answer;
		
		if (answer=='c' || answer=='C')
		{
			correctness();
		}
		else
		{
			wrongness();
		}
	}
	}

	else 
	{
		goto start;
	}

}

void correctness()
{
	score=score+1;
	x=x+1;
	cout<<"You got the correct answer!"<<endl;
	cout<<"Your score is "<<score<<endl;
	system("PAUSE");
	system("CLS");

	if (x<10)
	{
		questions();
	}
	else
	{
		score=score;
		highscores();
	}
}


void wrongness()
{
	x=x+1;
	cout<<"You have answered incorrectly"<<endl;
	cout<<"Your score is "<<score<<endl;
	system("PAUSE");
	system("CLS");

	if (x<10)
	{
		questions();
	}
	else
	{
		highscores();
	}

}

void yes()
{
	inputfile.open("highscore");
	inputfile>>high1>>score1;
	inputfile>>high2>>score2;
	inputfile>>high3>>score3;
	inputfile>>high4>>score4;
	inputfile>>high5>>score5;
	inputfile.close();

	strcpy(highscore[0].name,high1);
	highscore[0].score=score1;
	strcpy(highscore[1].name,high2);
	highscore[1].score=score2;
	strcpy(highscore[2].name,high3);
	highscore[2].score=score3;
	strcpy(highscore[3].name,high4);
	highscore[3].score=score4;
	strcpy(highscore[4].name,high5);
	highscore[4].score=score5;
	
	sort();
	print();
	
	strcpy(high1,highscore[0].name);
	score1=highscore[0].score;
	strcpy(high2,highscore[1].name);
	score2=highscore[1].score;
	strcpy(high3,highscore[2].name);
	score3=highscore[2].score;
	strcpy(high4,highscore[3].name);
	score4=highscore[3].score;
	strcpy(high5,highscore[4].name);
	score5=highscore[4].score;
	
	outputfile.open("highscore");
	outputfile<<high1<<endl<<score1;
	outputfile<<high2<<endl<<score2;
	outputfile<<high3<<endl<<score3;
	outputfile<<high4<<endl<<score4;
	outputfile<<high5<<endl<<score5;
	outputfile.close();
}

void sort()
{
	if(high[5].score>high[0].score||high[5].score>high[1].score||high[5].score>high[2].score||
		high[5].score>high[3].score||high[5].score>high[4].score)
	{
		cout<<"You have a high score"<<endl;
		cout<<"Please enter last name"<<endl;
		cin>>high[5].name;
	}
	int tempscore;
	char tempname[20];

	for (int a=0;a<5;a++)
	{
		for (int b=a+1;b<6;b=b++)
		{
			if (high[a].score<=high[b].score)
			{
				tempscore=high[a].score;
				high[a].score=high[b].score;
				high[b].score=tempscore;
				strcpy(tempname,high[a].name);
				strcpy(high[a].name,high[b].name);
				strcpy(high[b].name,tempname);
			}
		}
	}
}

void print()
{
	for (int z=0;z<6;z=z+1)
	{
		cout<<high[z].name<<"		"<<high[z].score<<endl;
	}
}
