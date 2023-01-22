#include <iostream>
#include <queue>
using namespace std;

int main(){
	
	// 큐 선언
	queue<int> que;

	// 큐에 요소 추가하기
	for (int i = 0; i < 5;i++)
		que.push(i);

	// 큐에서 요소 삭제하기
	int output = que.front();
	que.pop();

	// 큐 전체요소 출력하기
	while(!que.empty()){
		cout << que.front();
		que.pop();
	}

	return 0;
}