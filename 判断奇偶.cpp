#include <iostream>
#include <stdlib.h>
using namespace std;
namespace myNum           //��д�����ռ�Ĺؼ���
{
    int x = 105;
}
int main()
{
    // ʹ��bool���Ͷ���isOdd����Ϊ״̬λ
        bool    isFlag = false;       
	
	if(myNum::x % 2 == 0)
	{
		//�ı�״̬λ��ֵ��ʹ��Ϊfalse
        isFlag = false;
	}
	else
	{
	    //�ı�״̬λ��ֵ��ʹ��Ϊtrue
        isFlag = true;
	}
    // �ж�״̬λ��ֵ
	if(isFlag)
	{
		// ���״̬λ��ֵΪtrue�����ӡ����x������
        cout<<"����x������"<<endl;
	}
	else
	{
        // ���״̬λ��ֵΪfalse�����ӡ����x��ż��
		cout<<"����x��ż��"<<endl;
	}
	system("pause");
	return 0;
}

