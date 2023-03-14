
#include "cliet_screens/client_screens.h"
#include "admin_screens/admin_screens.h"

struct Screens
{
private:
	ClietScreens* clientScreens;
	AdminScreens* adminScreens;
public:
	void Login()
	{
		string user, password;
		long long value;
		bool isClient;
		cout << "������� ��� ��������� ������: " << endl;
		cout << "1 - �볺��" << endl;
		cout << "0 - ����" << endl;
		cout << "������: ";
		cin >> value;
		isClient = (bool)value;
		cin.ignore();
		cout << "������ ��'� �����������: ";
		getline(cin, user);
		cout << "������ ��'� ������: ";
		getline(cin, password);
		if (isClient)
		{
			clientScreens = new ClietScreens();
			clientScreens->Menu();
		}
		else
		{
			adminScreens = new AdminScreens();
			adminScreens->Menu();
		}
	}
};
