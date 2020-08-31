#include <stdio.h>
#include <stdlib.h>
typedef unsigned short int WORD;
typedef unsigned int DWORD;
typedef unsigned char BYTE;
 
typedef struct tagBITMAPFILEHEADER
{
    WORD bfType; // 位图文件的类型，必须为BM(0-1字节）
    DWORD bfSize;  // 位图文件的大小，以字节为单位（2-5字节）
    WORD bfReserved1;  // 位图文件保留字，必须为0(6-7字节）
    WORD bfReserved2;  // 位图文件保留字，必须为0(8-9字节）
    DWORD bfOffBits;  // 位图数据的起始位置（10-13字节），以相对于
} BITMAPFILEHEADER;
 
 
typedef struct tagBITMAPINFOHEADER
{
    DWORD biSize;  // 本结构所占用字节数（14-17字节）
    DWORD biWidth;  // 位图的宽度，以像素为单位（18-21字节）
    DWORD biHeight;  // 位图的高度，以像素为单位（22-25字节）
    WORD biPlanes;  // 目标设备的级别，必须为1(26-27字节）
    WORD biBitCount;  // 每个像素所需的位数，必须是1（双色），（28-29字节）
    DWORD biCompression;  // 位图压缩类型，必须是 0（不压缩），（30-33字节）
    DWORD biSizeImage;  // 位图的大小，以字节为单位（34-37字节）
    DWORD biXPelsPerMeter;  // 位图水平分辨率，每米像素数（38-41字节）
    DWORD biYPelsPerMeter;  // 位图垂直分辨率，每米像素数（42-45字节)
    DWORD biClrUsed;  // 位图实际使用的颜色表中的颜色数（46-49字节） 设为0的话，则说明使用所有调色板项，即2 biBitCount种颜色
    DWORD biClrImportant; // 位图显示过程中重要的颜色数（50-53字节）
}BITMAPINFOHEADER;
 
typedef struct tagRGBQUAD
{
	BYTE rgbBlue; // 蓝色的亮度（值范围为0-255)
	BYTE rgbGreen;  // 绿色的亮度（值范围为0-255)
	BYTE rgbRed;  // 红色的亮度（值范围为0-255)
	BYTE rgbReserved; // 保留字，必须为0
} RGBQUAD;
 
int main(void)
{
    FILE *result_r;// 输出的三个通道文件
    FILE *result_g;
    FILE *result_b;
	FILE *bmp;// 要读入的BMP文件
    long real_w;// 一个扫描行的实际占用字节数
    long offset = 0;// 用于偏移每行结尾处的冗余数据
    
	BITMAPFILEHEADER header;// BMP文件头
	BITMAPINFOHEADER info;// BMP信息头
    
    bmp=fopen("DATA5611.BMP", "r");
 
    fread(&header,14,1,bmp);
    fread(&info,40,1,bmp);
	printf("%d %d\n",info.biWidth,info.biHeight);
	return 0;
}
