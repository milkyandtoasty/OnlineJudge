#include <iostream>
using namespace std;
class Set
{
  public:
    Set(){ 
        for(int i = 0; i <100; i++){
            element[i] = 0;
        }
		count = 0;  	
	}
	
	Set(const Set &_set){
		count = _set.getCount();
		for(int i = 0; i < count; i++){
			element[i] = _set.getElementAtPos(i);
		}
	}     
    void display()
    {
        int j;
        for(j = 0;j < count;j ++)
        std::cout<<element[j]<<" ";
    }
    int getElementAtPos(int _n) const{
        return element[_n];
	}
	int getCount() const{
		return count;
	}
	int add(const int _n){
		for(int i = 0; i < count; i++){
			if(element[i] == _n){
				return 0;
			}
		}
		element[count] = _n;
		count++;
		return 1;
	}
	
	int add (const Set _set){
		int counter = 0;
		for(int i = 0; i < _set.getCount();i++){
			counter += add(_set.getElementAtPos(i));
		}
		return counter;
	}
    private:
        int element[100];
        int count;
};