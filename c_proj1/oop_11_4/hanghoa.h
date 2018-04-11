#include <iostream>
#include <string>

using namespace std;

class HangHoa
{
//properties
public:
	string m_MaHang;
	string m_TenHang;
	string m_MoTa;
	unsigned int m_SoLuong;
	float		m_GiaBan;
	string		m_LoaiHang;
//methods
public:
	//Contructor
	HangHoa();
	//Destructtor
	~HangHoa();
};