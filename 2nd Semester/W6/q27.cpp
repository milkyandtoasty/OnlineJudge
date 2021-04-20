#include <iostream>
#include <string>
using namespace std;
int main(){
	int test;
	cin>>test;
	int counts = 0;
	while(test--){
		counts++;
		int sr, sc;
		cin>>sr>>sc;
		
		
		int maze[32][32] = {0};
		
		
//		for(int i = 0; i < psr; i++){
//			for(int j = 0; j < psc; j++){
//			cout<<maze[i][j];
//			}
//			cout<<endl;
//		}
		
		string moves;
		cin>>moves;
		
		for(int i = 0; i < moves.length()-1; i++){
			switch(moves[i]){
				case 'N':
					maze[sr][sc] = 1;
					sc++;
					break;
				case 'S':
					maze[sr-1][sc-1] = 1;
					sc--;
					break;
				case 'E':
					maze[sr][sc-1] = 1;
					sr++;
					break;
				case 'W':
					maze[sr-1][sc] = 1;
					sr--;
					break;
			}				
		}
		cout<<"Bitmap #"<<counts<<endl;
		for(int i = 31; i >= 0; i--){
			for(int j = 0; j < 32; j++){
				if(maze[j][i]== 1){
					cout<<"X";
				}	
				else{
					cout<<".";
				}	
			}
			cout<<endl;
		}
		cout<<endl;
	}
}