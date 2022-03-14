#include <stdio.h>
#include <conio.h>
bool TestSNT(int N)
{
	bool test = true;
	int dem = 0;
	for (int i = 2; i < N; i++)
	{
		if (N%i == 0)
		{
			test = false;
			break;
		}
	}
	return test;
}
void lietkeSNTBe(int kq)
{
	
	printf("So nguyen to nho hon %d la: ", kq);
	for (int i = 2;i < kq;i++)
	{
		int dem = 0;
		for (int j = 2; j < kq; j++)
		{
			
			if (i%j == 0)
			{
				dem++;
			}
		}
		if (dem < 2) printf("%d ", i);
	
	}
}
void inKQSNT(int kq, int N)
{
	if (kq == true)
	{
		printf("%d la so nguyen to\n",N );
		lietkeSNTBe(N);
	}
	else printf("N khong phai la snt\n");
}

int main()
{
	//khai bao
	int N;
	bool kq;
	printf("Moi nhap N: ");
	scanf("%d", &N);
	kq = TestSNT(N);
	inKQSNT(kq,N);
	return 0;
}