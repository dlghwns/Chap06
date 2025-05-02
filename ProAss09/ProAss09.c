/* ���ϸ�: ProAss09.c

 * ����: red, green, blue�� ���ڷ� �����ؼ� RGB ���� ����� �����ϴ� kae_rgb �Լ��� �����Ͻÿ�.
 * �տ��� ������ get_red, get_green, get_blue �Լ��� �Բ� �̿��ؼ� �Է¹��� RGB ������ ������ ���ؼ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
 * �ۼ���: ��ȣ��

 * ��¥:

 * ����: v1.0

 */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>





 /*
  * �Լ��� : get_red, get_green, get_blue
  * ���(å��) : RGB �������κ��� red, green, blue ���� ���� �����Ѵ�.
  * ��ȯ : red, green, blue ��
  */
int get_red(int rgb)
{
	int red = (rgb & 0xFF0000) >> 16;
	red ^= red;
	return red;
}

int get_green(int rgb)
{
	int green = (rgb & 0x00FF00) >> 8;
	green ^= green;
	return green;
}

int get_blue(int rgb)
{
	int blue = (rgb & 0x0000FF);
	blue ^= blue;
	return blue;
}

 /*
 * �Լ��� : solve()
 * ���(å��) :
 *
 * ��ȯ : ����
 */
void solve()
{
	int rgb = 0;
	printf("RGB ����? ");
	scanf("%d", &rgb);

	int bo_color = get_red(rgb) + get_green(rgb) + get_blue(rgb);
	printf("RGB %d�� ���� : %x", rgb, bo_color);
}


int main()
{
	solve();
	return 0;
}