// 220408.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <map>


int main()
{
	/*
		ALU가 너무 빨라서 BUS 가 데이터를 가져다 주는걸 
		기다릴수 없으니까 레지스터에 미리 할당시켜놓는거임
		ecx esx 이런거
		멀티 스레딩 ( <- 컨텍스트 스위칭을 줄이기 위한 용도 )
		데드락
		컨텍스트 스위칭~

		면접에서 문자열 두개 주고 머가 앞인지 물어보면 어떻게 할까
		abs abcs
	*/
	std::map<char[8], int> map;

    return 0;
}

