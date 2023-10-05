#include <iostream>
#include <list>
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
     
	std::list<int>datalist;

	datalist.push_back( 10 );
	datalist.push_front( 50 );
	datalist.push_front( 25 );
	datalist.push_back( 33 );
 // 25 50 10 33


	// datalist.begin() : 첫 번째 주소로 반환
	// datalist.end() : 마지막에 있는 그 다음 주소를 반환


	//(begin)       (end)
	// 25 50 10 33 

	list<int>::iterator iter;
	
	for ( iter = datalist.begin(); iter != datalist.end(); iter++ )
	{
		cout << *iter << endl;

	}
#pragma endregion



	return 0;
}
