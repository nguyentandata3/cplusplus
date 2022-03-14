#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>    /// ham ho tro xu ly tren tung ky tu
char email[100]; char Firstname[100]; char Lastname[100]; char DuoiEmail[100] = "@greenacademy.edu.vn";

int TimViTriTen(char fullname[], int DoDai)
{
	int ViTri;
	for (int i = DoDai - 1; i >= 0; i--)
	{
		if (isspace(fullname[i]) != 0)
		{
			ViTri = i; break;
		}
	}
	return ViTri;
}
char* InTen(int start, int end, char fullname[])
{
	char content[100];
	int icontent = 0;
	for (int i = start; i < end;i++)
	{
		if (isspace(fullname[i]) == 0)
		{
			content[icontent] = fullname[i];
			icontent++;
		}
	}
	content[icontent] = '\0';
	return strlwr(content);
}

void main()
{
	char fullname[100]; 
	int ViTriTen;

	int DoDai = strlen(fullname); // ham nay dem do dai chuoi nhap vao va ko dem ky tu /0

	printf(" Moi nhap ho va ten :\n");
	gets(fullname);