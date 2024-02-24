#include <iostream>

using namespace std;

#include <list>
#include "List.h"

int main()
{
	
	// capacity (reserve)
	// - size 개념은 있어도 capacity 는 없다.
	
	// size(resize)
	// resize를 하면 그만큼 데이터가 할당된다.

	// 삽입/삭제
	// - 시작		O(1)
	// - 중간		O(N) << 중간에 삽입/삭제할 위치를 알고 있다면 O(1)
	// - 끝			O(1)

	// front		O(1)
	// back			O(1)
	// push_front	O(1)
	// push_back	O(1)

	// 임의 접근 li[2] << 지원하지 않는다.

	{
		list<int> li;

		li.insert(li.end(), 1);
		li.insert(li.end(), 2);
		list<int>::iterator it = li.insert(li.end(), 3);
		li.insert(li.end(), 4);
		li.insert(li.end(), 5);

		//li.insert(it, 100);
		li.erase(it);

	}

	{
		list<int> li = { 1, 2, 3, 4, 5 };

		list<int>::iterator it;
		for (it = li.begin(); it != li.end(); it++)
		{
			int value = *it;
			if (value == 3)
			{
				// 이터레이터로 삭제하는 경우는 매우 조심해야한다.
				// - 벡터 연습 참조
				break;
			}
		}

		if (it != li.end())
		{
			// 값을 찾은 경우
		}
	}


	{
		List<int> li;
		li.AddAtTail(10);
		li.AddAtTail(20);
		li.AddAtTail(30);


		for (List<int>::iterator it = li.begin(); it != li.end(); it++)
		{
			int value = *it;
			cout << value << endl;
		}
	}
}