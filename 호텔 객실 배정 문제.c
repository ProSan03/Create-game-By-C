#include <stdio.h>
#include <math.h>

int main() {
    int T, H, W, N, h = 0, w = 0; // H:층, W:각 열의 방, N:투숙객, T:프로그램 몇번 돌릴건지, h/w = 호텔 크기 만드는거 (백준거 씀)

    scanf_s("%d", &T);  // 몇번 돌릴건지 우선 입력 받음

    for (int i = 0; i < T; i++) // i는 T번 넘어가면 종료되도록, i=지역 변수
    {   
        scanf_s("%d %d %d", &H, &W, &N);    // 층이랑 각 열의 방, 투숙객 입력 넣음

        if (1<=H && W<=99 && 1<= N && N <= H * W)
        {
            w = N / H;  // 너비 = 투숙객 / 층
            h = N % H+1;  // 높이 = 투숙객 % 층

                if (w < 10) // 너비가 10 이하일 때
                {
                    if (h != 0)
                    {
                        printf("%d0%d\n", h, w + 1);  // 여기 사이에 0 안넣으면 두자리수만 출력되서 넣어야함, "%d %d"사이에 뭐가 있으면 안되는건 scanf! 
                    }
                    else
                    {
                        printf("%d0%d\n", H, w);
                    }
                }
                else // 너비가 10을 초과 했을 때
                {
                    if (h != 0)
                    {
                        printf("%d%d\n", h, w + 1);
                    }
                    else
                    {
                        printf("%d%d\n", H, w);
                    }
                }
        }
        else
        {
            break;
        }
    }
    return 0;
}