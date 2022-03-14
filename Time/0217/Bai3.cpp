// /Xây dựng một cấu trúc để quản lý thông tin của sinh viên bao gồm:
// mã số SV (tối đa 6 ký tự), họ tên (tối đa 50 ký tự), lớp (tối đa 6 ký tự), điểm toán,
// điểm anh văn, điểm tin học, điểm trung bình và xếp loại (tối đa 15 ký tự).

struct sinhvien
{
    char ma[6];
    char hovaten[50];
    char lop[6];
    float toan, anhvan, tinhoc, diemtrungbinh;
    char xeploai[15];    
};
int main()
{
    
    return 0;
}