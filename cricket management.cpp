
#include<iostream>
#include<fstream>
using namespace std;


// Class umpires to play with Umpires Data
class umpires{
public:
  char name[80];
  int age;

  void add_umpires(){
    cout<<"Enter the Name of Umpire : ";
    cin.ignore();
    cin.getline(name,80);
    cout<<"\nEnter the Empires Age : ";
    cin>>age;
  }
  void umpire_show()
  {
  	
  	cout<<"name "<<name<<ends<<"age "<<age;
  }
};


// Class teams to play with data realted with teams
class teams{
public:
  int team_id;
  int all_players_id[15];
  char team_name[50];
  int matches_won;
  int matches_lost;
  teams(){
    matches_won = 0;
    matches_lost = 0;
  }

  void team_input(){
    cout<<"Enter the Team Id : ";
    cin>>team_id;
    cout<<"\nEnter the Team name : ";
    cin.ignore();
    cin.getline(team_name,50);

    cout<<"Now, you have to Enter all the 15 Players ID's ";
    cout<<"\n\nEnter the Id's of Each Player : \n\n";
    for(int i = 0; i<15; i++){
      cout<<"Id of Player "<<i+1<<" :  ";
      cin>>all_players_id[i];
    }
  }
  void team_show()
  {
  	
  	cout<<"\nteam id   "<<team_id<<"\n team name  "<<team_name;
  	for(int i=0;i<15;i++)
  	{
  		 cout<<"Id of Player "<<i+1<<" :  "<<all_players_id[i]<<endl;
  	
	  }
  }
};


// Class matches to play with data related to matches
class matches{
public:
  int match_id;
  int team_1_id;
  int team_2_id;
  char team_1[50];
  char team_2[50];
  char date[20];
  char venue[100];
  char city[20];
  int match_winner_id;
  char match_winner_name[50];
  int man_of_the_match_id;
  char man_of_the_match[30];
  int win_margin;

  void matches_input(){
    cout<<"Enter Match id : ";
    cin>>match_id;

    cout<<"\nEnter 1st Team Id : ";
    cin>>team_1_id;

    cin.ignore();
    cout<<"\nEnter 1st Team Name : ";
    cin.getline(team_1,50);

    cout<<"\nEnter 2nd Team Id : ";
    cin>>team_2_id;

    cin.ignore();
    cout<<"\nEnter 2nd Team Name : ";
    cin.getline(team_2,50);

    cout<<"\nEnter the city in which match is PLayed : ";
    cin.getline(city,20);

    cout<<"\nEnter the Venue : ";
    cin.getline(venue,100);

    cout<<"\nEnter Match winner Team ID : ";
    cin>>match_winner_id;

    cin.ignore();
    cout<<"\nEnter Match winner Team Name : ";
    cin.getline(match_winner_name,50);

    cout<<"\nEnter the Man of the Match Name : ";
    cin>>man_of_the_match_id;

    cin.ignore();
    cout<<"\nEnter Man of the Match Name : ";
    cin.getline(man_of_the_match,30);

    cout<<"\nEnter the Win Margin : ";
    cin>>win_margin;

  }
  void matches_show()
  {
  cout<<match_id<<ends<<team_1_id<<ends<<team_2_id<<ends<<team_1<<ends<<team_2<<ends<<date<<ends<<venue<<ends<<city<<ends<<match_winner_id
  <<ends<<match_winner_name<<ends<<man_of_the_match_id<<ends<<man_of_the_match<<ends<<win_margin;
  }

};


// Class players to play with data related to players
class players{
public:
  int player_id;
  char player_name[80];
  char player_team[80];
  char batting_hand[20];
  char bowling_skill[50];
  char country[30];
  int age;
  int score;
  int sixes;
  int fours;
  int wickets;
  int number_of_centuries;
  int number_of_halfcenturies;
  float strike_rate;
  int score_per_match[50];     // 50 is the limit because no player playes more than 50 matches, even 50 is too much
  int wickets_per_match[50];
  int spm_count;
  int wpm_count;

  players(){
    score = 0;
    sixes = 0;
    fours = 0;
    wickets = 0;
    strike_rate = 0;
    spm_count = 0;
    wpm_count = 0;
    number_of_centuries = 0;
    number_of_halfcenturies = 0;
  }

  void player_basic_input(){
    cout<<"Enter the Player ID : ";
    cin>>player_id;
    cin.ignore();
    cout<<"\nEnter the Player name : ";
    cin.getline(player_name,80);
    cout<<"\nEnter player's Team name : ";
    cin.getline(player_team,80);
    cout<<"\nEnter batting hand : ";
    cin.getline(batting_hand,20);
    cout<<"\nEnter Bowling Skill : ";
    cin.getline(bowling_skill,50);
    cout<<"\nEnter the Age : ";
    cin>>age;
  }

  void updates_after_play(){
    int latest_score, latest_wickets, latest_sixes, latest_fours, is_century, is_halfcentury;
    cout<<"SO, NOW THE PLAYER HAS PLAYED A MATCH, IT'S TIME TO UPDATE \n\n";

    cout<<"Enter the player's ID : ";
    cin>>player_id;
    cout<<"\nEnter the player's name : ";
    cin.ignore();
    cin.getline(player_name,80);
    cout<<"\nEnter Player's Score in the Match : ";
    cin>>latest_score;
    score += latest_score;
    score_per_match[ spm_count++ ] = latest_score;

    cout<<"\nWickets taken : ";
    cin>>latest_wickets;
    wickets += latest_wickets;
    wickets_per_match[ wpm_count++ ] = latest_wickets;

    cout<<"\nNumber of Sixes : ";
    cin>>latest_sixes;
    sixes += latest_sixes;

    cout<<"\nNumber of Fours : ";
    cin>>latest_fours;
    fours += latest_fours;

    cout<<"\nIs he made Century? 1 for YES 0 for NO : ";
    cin>>is_century;
    number_of_centuries += is_century;

    cout<<"\nIs he made Half Century? 1 for YES 0 for NO : ";
    cin>>is_halfcentury;
    number_of_halfcenturies += is_halfcentury;

    cout<<"\nEnter player's strike rate : ";
    cin>>strike_rate;

  }
  void player_show()
  {
  	cout<<player_id<<ends<<player_name<<ends<<player_team<<ends<<batting_hand<<ends
	  <<bowling_skill<<ends<<country<<ends<<age<<ends<<score<<ends<<sixes<<ends
	  <<fours<<ends<<wickets<<ends<<number_of_centuries<<ends<<
	  number_of_halfcenturies<<ends<<strike_rate<<ends
	  <<score_per_match<<ends<<wickets_per_match<<endl;  }

};



int main() {
	  system(" color 20");

  ofstream fout;
  ifstream fin;
  int choice;
  int ch;
  do{
      cout<<"               ---------------------- MENU ----------------------\n\n";
      cout<<"1. Add Player\n2. Add Team\n3. Add Match\n4. Add Umpire\n5. Update Player's details\n";
      cout<<"6. View Player's info\n7. View Team's info\n8. View Match's info\n9. View Umpire's info\n";

      cout<<"\nPress your choice : ";
      cin>>choice;
      if(choice == 1){
        cout<<"          ---------- Enter all details related to the Player ----------\n\n";
        players player_inp;
        player_inp.player_basic_input();
        fout.open("players.dat",ios::out|ios::app|ios::binary);
        fout.write((char*)&player_inp,sizeof(player_inp));
        fout.close();
        cout<<"\n\nNew Player Details updated. ";
      }
      else if(choice == 2){
        cout<<"          ---------- Enter all details related to the Team ----------\n\n";
        teams team;
        team.team_input();
        fout.open("teams.dat",ios::out|ios::app);
        fout.write((char*)&team,sizeof(team));
        fout.close();
        cout<<"\n\nNew Team Details updated. ";
      }
      else if(choice == 3){
        cout<<"          ---------- Enter all details related to the Match ----------\n\n";
        matches match;
        match.matches_input();
        fout.open("matches.dat",ios::out|ios::app);
        fout.write((char*)&match,sizeof(match));
        fout.close();
        cout<<"\n\nNew Team Details updated. ";
      }
      else if(choice == 4){
        cout<<"          ---------- Enter all details related to the Umpire ----------\n\n";
        umpires umpire;
        umpire.add_umpires();
        fout.open("umpires.dat",ios::out|ios::app|ios::binary);
        fout.write((char*)&umpire,sizeof(umpire));
        fout.close();
        cout<<"\n\nNew Umpire Details updated. ";
      }
      else if(choice == 5){
        cout<<"          ---------- Update the Player details ----------\n\n";
        players player1;
        player1.updates_after_play();
        fout.open("players.dat",ios::out|ios::app);
        fout.write((char*)&player1,sizeof(player1));
        fout.close();
        cout<<"\n\nPlayer Details updated. ";
      }
      else if(choice == 6){
        cout<<"          ---------- Player info viewing portal ----------\n\n";
        class players player_out;
        ifstream ob("players.dat");
        ob.read((char*)&player_out,sizeof(player_out)); 
        player_out.player_show();
        ob.close();
	}
	else if(choice==9)
	{
		cout<<"          ---------- umpires info viewing portal ----------\n\n";
		umpires umpire_out;
		ifstream ob("umpires.dat",ios::in);
		ob.read((char*)&umpire_out,sizeof(umpire_out));
		umpire_out.umpire_show();
		ob.close();
		
	}
	else if(choice==7)
	{
	   cout<<"          ---------- team info viewing portal ----------\n\n";
	   ifstream ob("teams.dat");
	   teams team_out;
	   ob.read((char*)&team_out,sizeof(team_out));
	   team_out.team_show();
	   ob.close();
	   
	}
	else if(choice==8)
	{
		cout<<"               ------- -- -- matchs info viewing portal-----------\n\n";
		matches matches_out;
		ifstream ob("matches.dat");
		ob.read((char*)&matches_out,sizeof(matches_out));
		matches_out.matches_show();
		
	}
	
	

      cout<<"\n\nPress 1 to continue 0 to exit : ";
      cin>>ch;
      if(ch == 0)
        return 0;
  }
  while(ch == 1);


  return 0;
}
