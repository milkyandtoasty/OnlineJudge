#include <iostream>
using namespace std;
int main(){
	int test;
	cin>>test;
	while(test--){
		int r,c;
		int sr, sc;
		cin>>r>>c>>sr>>sc;
		
		int psr = r+1;
		int psc = c*2 +1;
		
		char maze[psr][psc];
		
		for(int i = 0; i < psr; i++){
			for(int j = 0; j < psc; j++){
				if(i == 0){
					if(j % 2 == 0){
						maze[i][j] = ' ';
					}
					else{
						maze[i][j] = '_';
					}
				}
				else{
					if(j % 2 == 0){
						maze[i][j] = '|';
					}
					else{
						maze[i][j] = '_';
					}
					
				}
			}
		}
		
//		for(int i = 0; i < psr; i++){
//			for(int j = 0; j < psc; j++){
//			cout<<maze[i][j];
//			}
//			cout<<endl;
//		}
		
		int tracker[2][100];
		tracker[0][0] = sr;
		tracker[1][0] = sc;
		int trackcount = 1;
		int counter = 0;
		
		while(counter < (r*c)- 1){
			char instr;
			cin>>instr;
			switch(instr){
				case 'U':
					counter++;
					maze[r - sr][sc*2-1] = ' ';
					sr++;
					tracker[0][trackcount] = sr;
					tracker[1][trackcount] = sc;
					trackcount++;
					break;
				case 'D':
					counter++;
					maze[r - sr + 1][sc*2-1] = ' ';
					sr--;
					tracker[0][trackcount] = sr;
					tracker[1][trackcount] = sc;
					trackcount++;
					break;
				case 'R':
					counter++;
					maze[r - sr + 1][(sc*2-1)+1] = ' ';
					sc++;
					tracker[0][trackcount] = sr;
					tracker[1][trackcount] = sc;
					trackcount++;
					break;
				case 'L':
					counter++;
					maze[r - sr + 1][(sc*2-1) - 1]  = ' ';
					sc--;
					tracker[0][trackcount] = sr;
					tracker[1][trackcount] = sc;
					trackcount++;
					break;
				case 'F':
					int flip;
					cin>>flip;
					sr = tracker[0][counter - flip];		
					sc = tracker[1][counter - flip];
					break;
			}				
		}
		
		for(int i = 0; i < psc-1; i++){
			cout<<maze[0][i];
		}
		cout<<endl;
		for(int i = 1; i < psr; i++){
			for(int j = 0; j < psc; j++){
				cout<<maze[i][j];
			}
				cout<<endl;
		}
		cout<<endl;
	}
}