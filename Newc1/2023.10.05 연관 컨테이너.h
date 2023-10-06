#pragma once
#include <iostream>
#include <list>
#include<vector>
using namespace std;


int main()
{

#pragma region 문자열
	// KEY와 VALUE가 하나의 구성으로 이루어진
	// 컨테이너 이다.

	/*std::string content = "Content";

	cout << "content 변수의 값 :" << content << endl;
	cout << "content 변수의 값 :" << content.size() << endl;
	content = "League";
	cout << "content 변수의 값 :" << content << endl;

	cout << content.find( "ag" ) << endl;*/
#pragma endregion

#pragma region 연관 컨테이너

	//std::list<int>datalist;

	//datalist.push_back( 10 );
	//datalist.push_front( 50 );
	//datalist.push_front( 25 );
	//datalist.push_back( 33 );
 //// 25 50 10 33


	//// datalist.begin() : 첫 번째 주소로 반환
	//// datalist.end() : 마지막에 있는 그 다음 주소를 반환


	////(begin)       (end)
	//// 25 50 10 33
	//  
	//// 반복자
	//datalist.pop_back();
	//list<int>::iterator iter;

	//iter = datalist.begin();
	//iter++;
	//datalist.insert(iter, 77 );
	//
	//for ( iter = datalist.begin(); iter != datalist.end(); iter++ )
	//{
	//	cout << *iter << endl;

	//}
	// 반복자 무효화
	/*std::vector<int> vectorInt;

	vector<int>::iterator vectorIter;

	vectorInt.reserve( 8 );

	vectorInt.emplace_back( 10 );
	vectorInt.emplace_back( 20 );
	vectorInt.emplace_back( 30 );
	vectorInt.emplace_back( 40 );

	vectorIter = vectorInt.begin();

	vectorInt.erase( vectorIter + 2 );

	for ( int i = 0; i < vectorInt.size(); i++ )
	{
		cout << vectorInt[ i ] << endl;
	}*/

#pragma endregion



	return 0;
}
