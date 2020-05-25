#include<iostream>
#include<vector>
#include<numeric>

#define ROW 2


using namespace std;

int main(){
	
	int score, COL = 6, t;
	cout << "Test Cases: ";
	cin >> t;
	
	while(t--)
	{
		vector<vector< int >> arr(ROW);
		vector< int > teamscore(2);
		
		for(int i = 0; i < ROW; i++)
		{
			int wickets = 2, wide_ball = 0;
			COL = 6;
			
			arr.push_back(vector< int >(COL,0));
			
			cout << "Team-" << i+1 << " over:" << endl;
			
			for(int j = 0; j < COL; j++)
			{
				cin >> score;
				
				if(score == -2 && wickets != 0)
				{   
					wickets--;
					arr[i].push_back(0);
					if(wickets == 0) break;		
					
				}
				
				else if(score == -1)
				{
					wide_ball++;
					COL = COL + 1;
									
				}
				
				else
				{
					arr[i].push_back(score);	
				}	
			}	
			teamscore[i] = accumulate(arr[i].begin(), arr[i].end(), 0) + wide_ball;
		}
		cout << "==============================================" << endl;
		
		if( teamscore[0] > teamscore[1] )
			cout << "Team-2 won" << endl;
	
		else if( teamscore[0] < teamscore[1] ) 
			cout << "Team-1 won" << endl;
		
		else
			cout << "Thriller! finally, it's a tie" << endl;
			
		cout << "==============================================" << endl;
	}
	return 0;
}
