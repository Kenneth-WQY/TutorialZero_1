#include <graphics.h>

char board_data[3][3] =
{
	{'-','-','-'},
	{'-','-','-'},
	{'-','-','-'},
};

char current_piece = 'O';

// ���ָ�����ӵ�����Ƿ��ʤ
bool CheckWin(char c)
{

}

// ��⵱ǰ�Ƿ����ƽ��
bool CheckDraw()
{

}

// ������������
void DrawBoard()
{

}

// ��������
void DrawPiece()
{

}

// ������ʾ��Ϣ
void DrawTipText()
{

}

int main()
{
	initgraph(600, 600);

	bool running = true;

	ExMessage msg;

	BeginBatchDraw();

	while (running)
	{
		while (peekmessage(&msg))
		{
			//�������������
			if (msg.message == WM_LBUTTONDOWN)
			{

			}
		}
		if (CheckWin('x'))
		{
			MessageBox(GetHWnd(), _T("X ��һ�ʤ"), _T("��Ϸ����"), MB_OK);
			running = false;
		}
		else if (CheckWin('o'))
		{
			MessageBox(GetHWnd(), _T("O ��һ�ʤ"), _T("��Ϸ����"), MB_OK);
			running = false;
		}
		else if (CheckDraw())
		{
			MessageBox(GetHWnd(), _T("ƽ��"), _T("��Ϸ����"), MB_OK);
		}
		cleardevice();

		DrawBoard();
		DrawPiece();
		DrawTipText();

		FlushBatchDraw();
	}

	EndBatchDraw();

	return 0;
}