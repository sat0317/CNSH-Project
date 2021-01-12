/*
Copyright 2020. Cat Coding  Community
Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

*/

#include <stdio.h>
#include <stdlib.h>
#include <memory.h>
#include <math.h>
#include <windows.h>
#include <string.h>
#include <time.h>
 
int f(){
	char yok[500][20] = {"10새기", "10새끼", "10새리", "10세리", "10쉐이", "10쉑", "10스", "10쌔", "10쌔기", "10쎄", "10창", "10탱", "18것", "18넘", "18놈", "18뇬", "18럼", "18롬", "18새", "18색", "18세끼", "18세리", "18섹", "18쉑", "18스", "18아", "CI8YEONA", "FUCK", "GAESAKI", "GAESE", "GASAKI", "JIRAL", "JOHNNA", "JONA", "JONNA", "MTF", "ROTORL", "SIBAL", "SIVAL", "SUCK", "TLQKF", "WTF", "ZIBAL", "ZIBALYEONA", "ZIRAL", "ZOHNNA", "ZONNA", "갈보년", "같은년", "같은뇬", "개같", "개구라", "개년", "개놈", "개뇬", "개대중", "개독", "개돼중", "개랄", "개보지", "개뻥", "개새", "개색", "개섀끼", "개세", "개세끼", "개세이", "개소", "개쇳기", "개수작", "개쉐", "개쉐리", "개쉐이", "개쉑", "개쉽", "개스끼", "개시키", "개십새기", "개십새끼", "개쐑", "개쑈", "개씨", "개씨방", "개씹", "개아들", "개자슥", "개자지", "개접", "개좆", "개좌식", "개허접", "갸색", "걔새", "걔수작", "걔시끼", "걔시키", "걔썌", "거지같", "게색기", "게색끼", "광뇬", "구녕", "그새끼", "ㄲㅣ", "노무노무", "노무딱", "노무짱", "노짱", "놈현", "뉘뮈", "뉘미럴", "느검", "느그어", "느그엄", "느금", "니귀미", "니기미", "니미", "니미랄", "니미럴", "니미씹", "니미요", "니아배", "니아베", "니아비", "니애미", "니어매", "니어메", "니어미", "니에미", "니엠", "닝기리", "닝기미", "닥쳐", "닭쳐", "뎡신", "돈놈", "돌아이", "돌은놈", "되질래", "뒈져", "뒈져라", "뒈진", "뒈진다", "뒈질", "뒤질래", "등신", "디져라", "디진다", "디질래", "따식", "때놈", "또라이", "똘아이", "똘아이", "뙈놈", "뙤놈", "뙨넘", "뙨놈", "뚜쟁", "뛰발", "띄발", "띠바", "띠발", "띠발", "띠밤", "띠불", "띠ㅋ발", "띠팔", "메친넘", "메친놈", "미췬", "미췬", "미친넘", "미친년", "미친놈", "미친새끼", "미친스까이", "미틴", "미틴넘", "미틴년", "미틴놈", "바랄년", "뱅마", "뱅신", "벼엉신", "병쉰", "병신", "병자", "부랄", "부럴", "불알", "불할", "붙어먹", "뷰웅", "븅", "븅신", "빌어먹", "빙시", "빙신", "빠구리", "빠굴", "빠큐", "뻐큐", "뻑큐", "뽁큐", "ㅅㅂ", "ㅅㅂㄹㅁ", "ㅅㅍ", "ㅅㅐ", "상넘이", "상놈을", "상놈의", "상놈이", "새갸", "새기", "새꺄", "새끼", "새새끼", "새키", "색기", "색끼", "색스", "생쑈", "세갸", "세꺄", "세끼", "섹스", "셰끼", "쉐기", "쉐끼", "쉐리", "쉐에기", "쉐키", "쉑", "쉨", "쉬발", "쉬밸", "쉬벌", "쉬뻘", "쉬펄", "쉽알", "스패킹", "스팽", "시@발", "시끼", "시댕", "시뎅", "시랄", "시바", "시바년", "시바련", "시발", "시벌", "시부랄", "시부럴", "시부레", "시부리", "시불", "시브랄", "시팍", "시팔", "시펄", "심탱", "십8", "십라", "십새", "십새끼", "십세", "십쉐", "십쉐이", "십스키", "십쌔", "십창", "십탱", "싶알", "ㅆ1발", "ㅆㅂㄹㅁ", "ㅆ앙", "ㅆㅍ", "ㅆㅣ", "싸가지", "싸발", "싹아지", "쌉년", "쌍넘", "쌍년", "쌍놈", "쌍뇬", "쌔끼", "쌔액스", "쌕", "쌩쑈", "쌴년", "썅", "썅년", "썅놈", "썎쓰", "썡쇼", "써벌", "썩을년", "썩을놈", "쎄꺄", "쎄엑", "쎅스", "쎅쓰", "쎾쓰", "쒸벌", "쒸뻘", "쒸팔", "쒸펄", "쓰바", "쓰박", "쓰발", "쓰벌", "쓰팔", "씁새", "씁얼", "씌발", "씌파", "씨@발", "씨1발", "씨8", "씨끼", "씨댕", "씨뎅", "씨바", "씨바랄", "씨박", "씨발", "씨방", "씨방새", "씨방세", "씨밸", "씨뱅", "씨벌", "씨벨", "씨봉", "씨봉알", "씨부랄", "씨부럴", "씨부렁", "씨부리", "씨불", "씨붕", "씨브랄", "씨빠", "씨빨", "씨뽀랄", "씨앙", "씨ㅋ발", "씨파", "씨팍", "씨팔", "씨펄", "씸년", "씸뇬", "씸새끼", "씹같", "씹년", "씹뇬", "씹방", "씹보지", "씹새", "씹새기", "씹새끼", "씹새리", "씹세", "씹쉐", "씹스키", "씹쌔", "씹이", "씹자지", "씹질", "씹창", "씹탱", "씹퇭", "씹팔", "씹할", "씹헐", "아가리", "아갈통", "아구창", "아구통", "아굴", "앰창", "야발", "양넘", "양년", "양놈", "엄창", "엠병", "엠창", "여물통", "엿같", "옘병", "옘빙", "왜년", "왜놈", "욤병", "육갑", "은년", "을년", "응디", "이기야", "이년", "이새끼", "이새키", "이스끼", "ㅈ같", "ㅈㄲ", "ㅈ깥", "ㅈㄴ", "ㅈㄹ", "자슥", "잡것", "잡넘", "잡년", "잡놈", "저년", "저새끼", "접년", "젖밥", "조까", "조까치", "조낸", "조또", "조빠", "조쟁이", "조지냐", "조진다", "조질래", "조찐", "족같", "존나", "존내", "존니", "존만", "존만한", "좀물", "좁년", "좁밥", "좃까", "좃또", "좃만", "좃밥", "좃이", "좃찐", "좆", "좆찐", "좇같", "좇이", "주글", "주글래", "주데이", "주뎅", "주뎅이", "주둥아리", "주둥이", "죽고잡", "죽통", "쥐랄", "쥐롤", "쥬디", "지랄", "지럴", "지롤", "지미랄", "쪼다", "쫍빱", "찌랄", "창녀", "창놈", "창뇬", "凸", "캐년", "캐놈", "캐스끼", "캐스키", "캐시키", "ㅍㅏ", "팔럼", "퍽큐", "호로", "호로놈", "호로새끼", "호로색", "호로쉑", "호로스까이", "호로스키", "후라들", "후래자식", "후레", "후뢰"};
	char filter[100][20] = {"소다방", "합법", "제태크", "재테크", "선착순", "성인방송", "성인 방송", "섹시", "수익", "야동", "t.me","band.", "(광고)", "가리기", "갱뱅", "NO모", "배팅", "결혼 등급", "투자금", "급전", "무료수신거부", "홍보대행", "고객만족", "시노스", "베팅", "파워볼", "미니게임", "카지노"};
	int yokn, filtern;
	char msg[10000];
	int len;
	fgets(msg, sizeof(msg), stdin);
	len=strlen(msg);
	printf("\n\n"); 
	for(int i=0;i<500;i++){
		yokn=i;
		if(yok[i][0]==0) break;
	}
	for(int i=0;i<100;i++){
		filtern=i;
		if(filter[i][0]==0) break;
	}
	
	if(len>100)
	for(int i=0;i<filtern;i++){
		int temp=strlen(filter[i]);
		for(int j=0;j<=len-temp;j++){
			if(strncmp(msg+j, filter[i], temp)==0){
				printf("문제의 키워드를 발견했습니다\n\n");
				printf("스펨입니다.");
				return 0;
			}
		}
	}
	
	for(int i=0;i<yokn;i++){
		int temp=strlen(yok[i]);
		for(int j=0;j<=len-temp;j++){
			if(strncmp(msg+j, yok[i], temp)==0){
				printf("문제의 키워드를 발견했습니다 (%s)\n\n", yok[i]);
				printf("욕설입니다.");
				return 0;
			}
		}
	}
	
	if(!strncmp(msg, "/서버 개발자", 12)){ 
        printf("개발자: 암고, 양사, 코양\n관리자: 코양\n운영: 고양이들의 코딩 위원회(C-3)\nCopyright 2020. Cat Coding Committee. All rights reserved.");
        return 0; 
    }
	if(!strncmp(msg, "/짖어", 5)){ 
        printf("왈왈!");
        return 0; 
    }
	if(!strncmp(msg, "/깃허브", 7)){
        printf("코양 - https://github.com/easycastle\n양 사 - https://github.com/sat0317\n러 리 - https://github.com/Coalery\n고 수 - https://github.com/cpprhtn\n깃 고 - https://github.com/NewPremium\n암 고 - https://github.com/azure-06\n루 - https://github.com/Lu175\n뽀 로 로 - https://github.com/paxbun\n녹 색 치 킨 - https://github.com/IceJack");
    	return 0;
	}

	
    if(!strncmp(msg, "코코야", 6)) {
        int answer = rand()%4;

    	if(answer == 0) {
       		printf("네?");
	    }
	   	else if(answer == 1) {
	       	printf("뭐");
	    }
	   	else if(answer == 2) {
	       	printf("아 왜 불러ㅡㅡ");
	    }
	   	else if(answer == 3) {
	       	printf("멍멍!");
	    }
	    return 0;
	}
	
	if(!strncmp(msg, "/채팅방 목록", 12)){
        printf("저희는 여러 개의 방과 같이 활동하는 개발자 연합입니다. 다른 종류의 언어를 질문하고 싶으시면 밑의 링크를 타시길 바랍니다. \n\n네이버카페(공통) - https://cafe.naver.com/codecat \n\n디스코드(공통) - https://discord.gg/xmyez8Jk \n\nC언어, C#, C++, 게임 엔진 - https://open.kakao.com/o/ghFjlzr \n\n자바, 안드로이드 - https://open.kakao.com/o/goAvtbOb \n\n파이썬(ML), R - https://open.kakao.com/o/gWvnqvF \n\n웹 - https://open.kakao.com/o/gm2yL8kb \n\n조립, 견적, pc문제 - https://open.kakao.com/o/gEI0jymb");
    }
	
}


int main(){
	srand(time(NULL));
	while(1) {
		f();
		printf("\n\n\n");
		system("pause");
		system("cls");
	}	
	
	return 0;
}





// 스팸의 예시
/*
?8년 무사고 꽃계열 1등업체?■가족 놀이터 "시노스"■가입 주소 ?? ■추천인 코드 (필수입력) ??WL65??가입 시 승인전화 X 개꿀 ! 5분이내 심사????가입 첫충 40% 받는방법??1. 사이트 가입 후 첫 충전을 한다.(자동으로 10% 지급 최대지급 50만원)2.게시판에 가입 인사글 남기고 고객센터로 문의한다.(10% 추가지급 최대지급 5만원)3.링크로 사이트 / 닉네임 양식에 맞춰서 문의한다.(20% 추가지급 최대지급 10만원)?단폴 베팅가능 졸업처리 X??동일경기 승오버+언더 베팅 가능??1일 환전 횟수 무제한 1회 환전 1000만원?? 미니게임 마틴루틴 제제X ?? 카지노]에볼루션,타이산,마이크,아시아,올벳 ??롤링]스포츠 100%│스코어존 200%│파워볼 300%?가족방 문의하기 :

?8년 무사고 꽃계열 1등업체?
■가족 놀이터 "시노스"
■가입 주소 ?? 
■추천인 코드 (필수입력) 
??가입 시 승인전화 X 개꿀 ! 5분이내 심사??
??가입 첫충 40% 받는방법??
1. 사이트 가입 후 첫 충전을 한다.
(자동으로 10% 지급 최대지급 50만원)
2.게시판에 가입 인사글 남기고 고객센터로 문의한다.
(10% 추가지급 최대지급 5만원)
3. 링크로 사이트 / 닉네임 양식에 맞춰서 문의한다.
(20% 추가지급 최대지급 10만원)
?단폴 베팅가능 졸업처리 X?
?동일경기 승오버+언더 베팅 가능?
?1일 환전 횟수 무제한 1회 환전 1000만원?
? 미니게임 마틴루틴 제제X ?
? 카지노]에볼루션,타이산,마이크,아시아,올벳 ?
?롤링]스포츠 100%│스코어존 200%│파워볼 300%?
가족방 문의하기 : 


??강남본사점??
코로나 때문에 많이힘드시죠?
힘든당신을 위해 준비했습니다
 ??직장인 / 주부 / 자영업자??
 ??. 누구나 어디서든 쉽게. ??
 ?? 6년 연속 고객만족 1위.??
  강남본사점이 책임 지겠습니다.
          무료상담 받으세요

??강남본사점??코로나 때문에 많이힘드시죠?힘든당신을 위해 준비했습니다 ??직장인 / 주부 / 자영업자?? ??. 누구나 어디서든 쉽게. ?? ?? 6년 연속 고객만족 1위.??  강남본사점이 책임 지겠습니다.
          무료상담 받으세요
*/ 
